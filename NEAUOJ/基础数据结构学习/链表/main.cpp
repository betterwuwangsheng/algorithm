#include <iostream>
using namespace std;

// 定义链表结点
struct NODE {
    int front;
    int next;
} e[100010];

int main() {
    e[3].next = 142;
    e[4].front = 3;
    e[4].front = 5;
    e[5].next = 4;

    // 在 e[0] 之后插入 10
    e[3].next = 10;
    e[10].front = 3;
    e[10].next = 4;
    e[4].front = 10;

    int i = 3;
    while (i) {
        printf("%d ", i);
        i = e[i].next;
    }

    return 0;
}