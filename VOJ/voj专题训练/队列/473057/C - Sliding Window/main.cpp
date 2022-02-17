#include <iostream>
#include <queue>

using namespace std;

const int MAXN = 1e6 + 10;

struct NODE {
    // 数值
    int value;

    // 下标
    int index;
};

int n, k, num[MAXN];
deque<NODE> q;
int main() {
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; ++i) {
        scanf("%d", &num[i]);
    }

    for (int i = 1; i <= k; ++i) {
        // 队列不空且队尾的数值 >= 要进入队列的数字
        while (!q.empty() && q.back().value >= num[i]) {
            // 队尾出队
            q.pop_back();
        }

        // 将节点加入队尾
        q.push_back(NODE{num[i], i});
    }

    // 输出队头元素 -> 最小值
    printf("%d", q.front().value);

    // 移动窗口
    for (int i = k + 1; i <= n; ++i) {
        // 若队头元素不在窗口中
        if (!q.empty() && i - q.front().index + 1 > k) {
            q.pop_front();
        }
        while (!q.empty() && q.back().value >= num[i]) {
            // 队尾出队
            q.pop_back();
        }
        // 将节点加入队尾
        q.push_back(NODE{num[i], i});

        // 输出
        printf(" %d", q.front().value);
    }

    puts("");

    q.clear();

    for (int i = 1; i <= k; ++i) {
        // 队列不空且队尾的数值 >= 要进入队列的数字
        while (!q.empty() && q.back().value <= num[i]) {
            // 队尾出队
            q.pop_back();
        }

        // 将节点加入队尾
        q.push_back(NODE{num[i], i});
    }

    // 输出队头元素 -> 最小值
    printf("%d", q.front().value);

    // 移动窗口
    for (int i = k + 1; i <= n; ++i) {
        // 若队头元素不在窗口中
        if (!q.empty() && i - q.front().index + 1 > k) {
            // 队头出队
            q.pop_front();
        }
        while (!q.empty() && q.back().value <= num[i]) {
            // 队尾出队
            q.pop_back();
        }
        // 将节点加入队尾
        q.push_back(NODE{num[i], i});

        // 输出
        printf(" %d", q.front().value);
    }
    return 0;
}