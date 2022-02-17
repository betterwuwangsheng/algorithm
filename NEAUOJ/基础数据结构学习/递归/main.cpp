#include <iostream>
#include <vector>

using namespace std;

typedef long long LL;
/*
    递归的简单实例
*/

// 计算阶乘
LL fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return fact(n - 1) * n;
}

// 循环版本
LL fact2(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i)
        res *= i;
    return res;
}

// 求最大公约数
// 能够同时整除这两个数的最大正整数
int gcd(int a, int b) {
    if (a > b)
        swap(a, b);
    for (int i = a; i >= 1; --i) {
        // 找到一个能够整除这两个数的最大正整数( 从大数开始遍历 -> 较更加简便)
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

/*
    辗转相除法是利用以下性质来确定两个正整数 a 和 b 的最大公因子的：
    ⒈ 若 r 是 a ÷ b 的余数，且r不为0， 则
        gcd(a,b) = gcd(b,r)
    ⒉ a 和其倍数之最大公因子为 a。
        另一种写法是：
    ⒈ 令 r 为 a/b 所得余数（0≤r
        若 r= 0，算法结束；b 即为答案。
    ⒉ 互换：置 a←b，b←r，并返回第一步。
*/
// 辗转相除法 -> 递归
int gcd2(int a, int b) {
    if (b == 0)
        return a;
    return gcd2(b, a % b);
}

// 辗转相除法 -> 循环
int gcd3(int a, int b) {
    // a = 0 时，最大公约数为 b
    if (a == 0)
        return b;

    // 当除数 > 0 -> 循环
    while (b) {
        // 求 a 对 b 的余数
        int t = a % b;

        // 把 b 给 a
        a = b;

        // 把余数给 b
        b = t;
    }

    // 最大的除数
    return a;
}

// 手写栈实现二进制分解
void get_binary_stack(int x) {
    int top, stk[30];

    do {
        // 入栈
        stk[++top] = x % 2;
        x >>= 1;
    } while (x);

    while (top)
        printf("%d", stk[top--]);
}

// 二进制分解
vector<int> get_binary(int num) {
    vector<int> ans;
    int t;

    if (num == 0)
        ans.push_back(0);
    while (num) {
        ans.push_back(num % 2);
        num >>= 1;
    }
    return ans;
}

// 该递归不可回溯 -> 出栈
void fun(int i) {
    printf("%d\n", i);
    fun(i + 1);
}

// 递归版本
LL fib1(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fib1(n - 1) + fib1(n - 2);
}

// 非递归版本 1
int f2[10000];
void fib2(int n) {
    f2[1] = f2[2] = 1;
    for (int i = 3; i <= n; ++i) {
        f2[i] = f2[i - 1] + f2[i - 2];
    }
}

// 更精简版本
int f3[2];
void fib3(int n) {
    f3[0] = f3[1] = 1;
    for (int i = 2; i < n; ++i) {
        int t = f3[i - 1] + f3[i - 2];
        f3[0] = f3[1];
        f3[1] = t;
    }
}

int main() {
    LL ans1 = fact(3);
    LL ans2 = fact2(3);
    cout << ans1 << " " << ans2 << endl;

    int a = gcd(12, 10);
    int b = gcd2(12, 10);
    int c = gcd3(12, 10);
    cout << a << endl << b << endl << c << endl;

    vector<int> res = get_binary(2);
    for (int i = i < res.size() - 1; i >= 0; --i) {
        cout << res[i];
    }

    cout << endl;
    get_binary_stack(2);

    cout << endl;
    cout << endl;

    cout << fib1(4) << endl;

    fib2(4);
    cout << f2[4] << endl;

    fib3(3);
    cout << f3[0] + f3[1] << endl;
    return 0;
}