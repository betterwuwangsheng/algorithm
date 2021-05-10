#include <bits/stdc++.h>

using namespace std;

const int MaxN = 5010;

int a[MaxN];//保存求解斐波那契数列的中间结果
int b[MaxN];//保存求解斐波那契数列的中间结果
int c[MaxN], lc = 1; //保存结果 -> lc -> 结果的长度为 1

int main() {
    a[1] = 1; //初始化 f(0) = 0; f(1) = 1
    b[1] = 2;//f(2) = 2

    int n;
    cin >> n;

    if (n <= 2) {
        cout << n;
        return 0;
    }

    for (int i = 3; i <= n; i++) { //求解 f(n)

        memset(c, 0, sizeof(c)); //初始化 c

        for (int j = 1; j <= lc; j++) { //高精度加法
            c[j] += a[j] + b[j]; //竖式加法
            c[j + 1] += c[j] / 10;//获得进位
            c[j] %= 10;//留下该位最终结果
        }
        if (c[lc + 1] > 0)//有进位 -> 长度增加
            lc++;
        for (int j = 1; j <= lc; j++) {//不断交换 a b 中的中间结果 -> 实现交换保存
            a[j] = b[j];
        }
        for (int j = 1; j <= lc; j++) {
            b[j] = c[j];
        }
    }
    for (int i = lc; i >= 1; i--) {//倒序输出
        cout << c[i];
    }
    return 0;
}
