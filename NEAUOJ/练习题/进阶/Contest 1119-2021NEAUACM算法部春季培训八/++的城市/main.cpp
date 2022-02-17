#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5 + 10;

// 定义二维数组
vector<int> vec[N];

bool cmp(int a, int b) {
    return a > b;
}

int t, n, m, q, u, v, k;
int main() {
    /**
     * v[起点].push_back(终点)
     * 记录一个定点到其他定点的边的信息
     */

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d", &n, &m, &q);

        while (m--) {
            // 读入边的信息
            scanf("%d %d", &u, &v);

            // 自环 -> 不记录信息
            if (u == v)
                continue;

            // 加入边的信息(两个方向)
            vec[u].push_back(v);
            vec[v].push_back(u);
        }

        // 询问
        while (q--) {
            scanf("%d", &k);

            // 输出该询问的小镇直接连接的其他小镇的数量
            printf("%d", vec[k].size());

            // //内置类型的由大到小排序
            sort(vec[k].begin(), vec[k].end(), greater<int>());

            for (auto v : vec[k]) {
                printf(" %d", v);
            }
            puts("");
        }
        /*
                printf("\n\n++++++++++++\n\n");

                // 行数
                for (int i = 0; i < n; ++i) {
                    // 每一行的元素数量
                    for (int j = 0; j < vec[i].size(); ++j)
                        printf("%d %d", i, vec[i][j]);
                    puts("");
                }

                printf("\n\n++++++++++++\n\n");
        */
        // 每次询问后清空二维数组
        for (int i = 0; i < n; ++i)
            vec[i].clear();
    }
    return 0;
}
