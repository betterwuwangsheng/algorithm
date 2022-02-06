#include <iostream>

using namespace std;

// 交换的第一个版本
// 值传递 -> 创建了新的变量 -> （新的变量交换了）
// 但是使用之后新变量释放了
// 原来的变量还是没有交换
void swap1(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

// 新的变量存储原来的地址
void swap2(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void swap3(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap1(a, b);
    printf("%d %d\n", a, b);

    swap2(&a, &b);
    printf("%d %d\n", a, b);

    swap3(a, b);
    printf("%d %d\n", a, b);
    return 0;
}