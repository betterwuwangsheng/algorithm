#include <cstring>
#include <iostream>

using namespace std;

/**
 * 链式前向性星 -> 经常访问一个点邻接点 (邻接表或者链式前向星)
 * 链式前向星更快
 *
 * 属于静态链表 -> 不需要频繁地创建结点
 *
 * 1. 边集数组: 对边排序
 *      edge[i]: 代表第 i 条边
 * 2. 头结点数组:
 *      head[]: head[i] 存储以第 i 边为起点的第一条边的下标(在 edge[i] 中的下标)
 *
 */

struct EGDE {
    // 邻接点的编号
    int to;

    // 权重
    int w;

    // 第 i 条边的编号
    // 没有下一条边 -> -1
    int next;
} edge[100];  // 边集数组 -> 边数 > maxn * maxn (每个节点有 n - 1 条边)大的数

// 头结点数组存储以 i 结点连边的链表最后加入的边的编号
int head[100];

// 对于无向图
//  1 -> 2 and 2 -> 1
// edge[(两倍节点数)^2]
// 添加一条边

// 初始化边的下标
int index = 0;
void add(int u, int v, int w) {
    // 存储弧头
    edge[index].to = v;

    // 权重
    edge[index].w = w;

    /*
        以下步骤实现头插法

        1. 修改带插入结点的下一节点为上一 head 指向的结点
        2. 修改 head 结点指向为待插入的结点
    */
    // 加入bian
    // 存储该节点连接的下一条边的序号
    // 头插法
    // 修改 head[u]
    // 将边链接到 u 号节点的头结点中
    // 注意此时 head[u] 指向的还是上一次的边
    edge[index].next = head[u];


    // 将 u 号节点的序号变成边的下标(两者保持一致)
    head[u] = index++;
}

int main() {
    memset(head, -1, sizeof(head));
    int n, m;
    cin >> n >> m;

    int x, y, w;
    for (int i = 1; i <= m; ++i) {
        cin >> x >> y >> w;
        add(x, y, w);
        add(y, x, w);
    }
    for (int j = 1; j <= n; ++j) {
        cout << j << ":   ";
        // 访问一个结点的所有邻接点
        for (int i = head[j]; i != -1; i = edge[i].next) {
            int v1 = edge[i].to;
            int w1 = edge[i].w;
            cout << "[" << v1 << " " << w1 << "]\t";
        }
        cout << endl;
    }
    return 0;
}