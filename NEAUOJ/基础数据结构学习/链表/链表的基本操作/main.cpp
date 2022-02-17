#include <iostream>

using namespace std;

const int MAXN = 1e5 + 10;

// 静态链表
struct NODE {
    int nextPos = 0;
    int frontPos = 0;
};

// 防止删除重复的点
bool vis[MAXN];

struct LIST {
    NODE queue[MAXN];

    inline void init() {
        queue[0].nextPos = 1;
        queue[1].frontPos = 0;
    }

    void leftInsert(int index, int pos) {
        // 获取左侧节点位置
        int leftIndex = queue[pos].frontPos;

        // 插入位置的前一个元素的位置
        queue[index].frontPos = leftIndex;

        // 插入位置的前一个元素的下一元素的位置
        queue[leftIndex].nextPos = index;

        // 插入位置下一节点的前一个元素的位置
        queue[pos].frontPos = index;

        // 插入元素的下一个元素的位置
        queue[index].nextPos = pos;
    }

    void rightInsert(int index, int pos) {
        int rightIndex = queue[pos].nextPos;
        queue[pos].nextPos = index;
        queue[index].frontPos = index;
        queue[index].nextPos = rightIndex;
        queue[rightIndex].frontPos = index;
    }

    void remove(int pos) {
        int rightIndex = queue[pos].nextPos;
        int leftIndex = queue[pos].frontPos;

        queue[leftIndex].nextPos = rightIndex;
        queue[rightIndex].frontPos = leftIndex;
    }

    void print() {
        int pos = 0;

        // 当下一个元素的位置不是 0 时
        while (queue[pos].nextPos)
            printf("%d", queue[pos].nextPos);
        pos = queue[pos].nextPos;
    }
} list;

int main() {
    int n;
    scanf("%d", &n);

    list.init();

    for (int i = 2; i <= n; ++i) {
        int k, p;
        scanf("%d %d", &k, &p);

        if (p)
            list.rightInsert(i, k);
        else
            list.leftInsert(i, k);
    }

    int m;
    scanf("%d", &m);

    for (int i = 1; i <= m; ++i) {
        int num;
        scanf("%d", &num);

        if (!vis[num])
            list.remove(num);
        vis[num] = 1;
    }
    return 0;
}