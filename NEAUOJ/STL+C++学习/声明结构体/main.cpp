#include <iostream>

// 声明 c 语言头文件
// #include <ctime> => #include <time.h>
#include <ctime>

// 常量
// const int MX = 1e5 + 10;
// int a[MX];

// bool 类型
// bool falg = 0;

// 强制类型转换
// int(a);

// 可存在同名但是不同参数的函数
// 万能头文件
// #include <bits/stdc++.h>

/**
 * int n; scanf("%d", &n) cin >> n;
 * int n; hcar c; scanf("%d%c",&n, &c); cin >> n >> c;
 * char s[100]; scanf("%d", s); cin >> s;
 * - printf("hello\n") cout << hello << endl;
 * int n; printf("%d\n", n); cout << n << endl;
 * char s[100]; print("%s\n, s");
 *
 */
using namespace std;

int x, y;
int main() {
    // 读到文件尾部
    while (~scanf("%d", &x)) {
        printf("%d\n", x);
    }

    // cin 形式
    // while (cin >> y) {
    // }
    return 0;
}