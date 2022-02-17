// #include <iostream>
// #include <queue>

// using namespace std;

// // 创建优先队列
// // 基于二叉堆 -> 堆 实现
// // 大根堆，小根堆
// // priority_queue<int> q;
// struct NODE {
//     int value;
//     int index;

//     // 运算符重载 bool operator<(const 类型 &a) const{return 0;}
//     bool operator<(const NODE& a) const {
//         // 根据 value 的值比较大小
//         return value < a.value;
//     }
// } node[100010];

// priority_queue<int, vector<int>, greater<int>> q;

// int main() {
//     /**
//      // 判空
//      q.empty();

//      // 元素数量
//      q.size();

//      // 插入元素到队尾 (并排序)
//      q.push(1);

//      // 访问队头元素
//      q.top();

//      // 弹出队头元素
//      q.pop();

//      // q.push() q.pop() O(logn)
//      */

//     // 不设置优先级 -> 数值越大优先级越大
//     q.push(3);
//     q.push(31);
//     q.push(123);
//     q.push(4323);
//     q.push(343);
//     q.push(-1);

//     // 出队列
//     q.pop();

//     printf("%d", q.top());

//     return 0;
// }

#include <iostream>
#include <queue>

using namespace std;

int n, num;
priority_queue<int, vector<int>, greater<int>> q;

int main() {
    scanf("%d", &n);
    // 每次都要排序以确定最少果子的两堆 -> 自动排序的数据结构
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        q.push(num);
    }

    int sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        // 获取堆顶元素
        int a = q.top();

        //删去堆顶元素
        q.pop();
        int b = q.top();
        q.pop();

        //求和
        sum += a;
        sum += b;

        //将上一次计算的两对之和存入优先队列
        q.push(a + b);
    }
    printf("%d\n", sum);
    return 0;
}