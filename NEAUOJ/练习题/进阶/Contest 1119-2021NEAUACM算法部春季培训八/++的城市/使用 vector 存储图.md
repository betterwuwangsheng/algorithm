# 这里使用邻接表存储图

## 一般实现，使用两个数组来表示图，其中一个数组存储图中的顶点信息，一个二维数组存储图中的边或弧的信息

### 优点: 可以方便的知道任意两点是否有边

### 缺点: 如果图中边比较少这样会比较浪费存储空间

---

### 使用 vector 实现

    vector<所开数组的类型> 数组名(可以是数组)（通俗理解，vector 数组比直接声明的多一维）

```c
vector<int> t[10007];         //声明 vector
for (int i = 1; i <= m; i++)  //存边；
{
    int x, y;
    cin >> x >> y;  // x，y，表示点 x、y 间连同着一条边；
    t[x].push_back(y);
}

我们可以定义

vector<int> G[10001][21];

他实际上等于发G[第一维][第二维][第三维]

其中第1、2维我们自己输入，第三维根据我们输入的次数自增。

输入：G[x][y].push_back(z)

访问时为G[x][y][i]=z(i表示第几条边,自增)

x，y，z，可以根据需要定义，实质上与二维vector并没有很大区别

不建议通过开多一维的方式存边权，建议开结构体vector;

初始化：vector<结构体名> G[10001][21];

读入：q[x][y].push_back((结构体名字){读入的数据})

struct edge {
    int to, w;//表示终点，权值。
};
int n, m, k;
vector<int> G[10001];
int main() {
    scanf("%d%d%d", &n, &m);//表示点数，边数。
    for (int i = 1; i <= m; i++) {
        int a, b, c;//代表一个边起点，终点，权值。
        scanf("%d%d%d", &a, &b, &c);
        G[a].push_back((edge) {b, c});//按照结构体类型强压，变量顺序要按照在结构体中定义的顺序。
    }
        G[a][i].to; //以a为起点的第i条边终点为to（前面村的对应的c）
        G[a][i].w;//同理。
        //对于像迪杰斯特拉等需要遍历以某点为起点的我们照样i<=G[a].size即可
    return 0;
}

// 遍历
for (int i = 0; i < n; ++i) {
            for (int j = 0; j < vec[i].size(); ++j)
                printf("%d %d", i, vec[i][j]);
            puts("");
        }
// size 为存了 i 的个数.
```
