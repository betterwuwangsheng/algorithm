#include <iostream>

// 队列头文件
#include <queue>

using namespace std;

void print_queue(queue<int> q) {
    // 队列非空
    while (!q.empty()) {
        // 打印元素
        printf("%d\n", q.front());

        // 出队列
        q.pop();
    }
}

// 创建队列
queue<int> q;

int main() {
    q.push(1);
    q.push(2);
    q.push(3);

    // cout << q.empty() << endl;
    // q.pop();
    // cout << q.front() << endl;
    // cout << q.size() << endl;

    print_queue(q);
    return 0;
}