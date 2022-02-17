#include <iostream>
#include <vector>

using namespace std;

struct NODE {
    // 能到达的边
    int to;

    // 权值
    int cost;
};

//大数组要定义在 main 函数外
vector<NODE> mp[100010];
int main() {
    // 当 n <= 1e5
    //  m < 1e5;
    // 无法创建这么大的数组 -> 使用 vector 数组
    // 使用 vector 存储图
    // vector 数组不定长
    // 使用这种方式创建的数组是二维的
    // mp[0] 是一个 vector
    // mp[1] 是一个 vector
    // ....

    // 有向图
    // mp[1].push_back(NODE{4, 700});
    // mp[1].push_back(NODE{3, 100});
    // mp[1].push_back(NODE{2, 500});
    // mp[3].push_back(NODE{2, 300});
    // mp[4].push_back(NODE{2, 100});

    // // 遍历
    // for (int i = 0; i < mp[1].size(); ++i) {
    //     cout << "1 -> " << mp[1][i].to << " 的成本是: " << mp[1][i].cost
    //          << endl;
    // }

    int n;
    scanf("%d", &n);

    while (n--) {
        int from, to, cost;
        scanf("%d%d%d", &from, &to, &cost);

        // 起点  连接的终点以及权值
        // 有向图
        mp[from].push_back(NODE{to, cost});

        // 无向图
        // mp[from].push_back(NODE{to, cost});
        // mp[to].push_back(NODE{from, cost});
    }

    // 遍历
    for (int i = 0; i < mp[1].size(); ++i) {
        cout << mp[1][i].to << mp[1][i].cost << endl;
    }
    return 0;
}