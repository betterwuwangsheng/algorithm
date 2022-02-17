#include <iostream>

// 引入双端队列头文件
#include <deque>

using namespace std;

// 创建双端队列
deque<int> dq;

const int N = 1e6 + 10;
int n, k, num[N];

// pair -> 存储两个数
// 第一个数 -> 元素值
// 第二个数 -> 记录下标 -> 窗口是否滑出
// deque<pair<int, int>> q;

// 创建节点保存值和下标
struct NODE {
    int value;
    int index;
};

deque<NODE> q;
int main() {
    /**  // 从队尾加入元素
      dq.push_back(1);

      // 从队尾弹出元素
      dq.pop_back();

      // 从队头加入元素
      dq.push_front(2);

      // 从队头弹出元素
      dq.pop_front();

      // 取出队头元素
      dq.front();

      // 取出队尾元素
      dq.back();

      // 判空
      dq.empty();

      // 大小
      dq.size();

      dq.push_front(1);
      dq.push_front(2);
      dq.push_front(3);

      // back -> 尾部添加元素
      dq.push_back(11);
      dq.push_back(22);
      dq.push_back(33);

      // 输出队尾元素
      printf("%d\n", dq.back());

      // 输出队头元素
      printf("%d\n", dq.front());
  */
    // P1886 滑动窗口 /【模板】单调队列

    scanf("%d %d", &n, &k);

    // 读入数据
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &num[i]);
    }

    for (int i = 1; i <= k; ++i) {
        // 队列非空且队尾元素的值 >= 要插入的元素,然后插入该元素
        while (!q.empty() && q.back().value >= num[i])
            // 出队尾元素
            q.pop_back();

        // 加入 NODE 赋值 -> NODE{value, index}
        q.push_back(NODE{num[i], i});
    }

    // 输出最小值(队头即为最小元素 -> 因为每次都是将大的元素放在后面)
    printf("%d", q.front().value);

    // k + 1 个元素开始
    // 10 3 1 2
    //    [   ]
    for (int i = k + 1; i <= n; ++i) {
        // 队列非空且队头元素不再华东窗口中
        if (!q.empty() && i - q.front().index + 1 > k)
            // 由于不再窗口中 -> 将队头元素弹出
            q.pop_front();

        // 队列非空时
        while (!q.empty() && q.back().value >= num[i]) {
            // 出队尾元素
            q.pop_back();
        }

        // 加入 NODE 赋值 -> NODE{value, index}
        q.push_back(NODE{num[i], i});
        printf(" %d", q.front().value);
    }
    puts("");

    q.clear();

    // 找最大值
    for (int i = 1; i <= k; ++i) {
        // 队列非空且队尾元素的值 >= 要插入的元素,然后插入该元素
        while (!q.empty() && q.back().value <= num[i])
            // 出队尾元素
            q.pop_back();

        // 加入 NODE 赋值 -> NODE{value, index}
        q.push_back(NODE{num[i], i});
    }

    // 输出最小值(队头即为最小元素 -> 因为每次都是将大的元素放在后面)
    printf("%d", q.front().value);

    // k + 1 个元素开始
    // 10 3 1 2
    //    [   ]
    for (int i = k + 1; i <= n; ++i) {
        // 队列非空且队头元素不再华东窗口中
        if (!q.empty() && i - q.front().index + 1 > k)
            // 由于不再窗口中 -> 将队头元素弹出
            q.pop_front();

        // 对垒非空时
        while (!q.empty() && q.back().value <= num[i]) {
            // 出队尾元素
            q.pop_back();
        }

        // 加入 NODE 赋值 -> NODE{value, index}
        q.push_back(NODE{num[i], i});
        printf(" %d", q.front().value);
    }
    return 0;
}