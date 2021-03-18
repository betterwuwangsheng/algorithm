#include <bits/stdc++.h>

/**
题目描述
求两数的积。

输入格式
两行，两个整数。

输出格式
一行一个整数表示乘积。

输入输出样例
输入
1
2
输出
2
说明/提示
每个数字不超过 10^2000，需用高精。
*/
using namespace std;

const int MX = 1e5 + 10;
string x, y;
int a[MX], b[MX], c[MX];
int la, lb, lc;

int main() {

    //读入很长的数字
    cin >> x >> y;

    //获得长度
    la = x.length();
    lb = y.length();

    //将字符串 x 转换为 int 数组 a
    for(int i = 0; i < la; i++) {

        //倒序存储 ->  长度 - i
        a[la - i] = x[i] - '0';
    }
    //将字符串 y 转换为 int 数组 b
    for(int i = 0; i < lb; i++) {

        //倒序存储 ->  长度 - i
        b[lb - i] = y[i] - '0';
    }

    //交叉相乘
    for(int i = 1; i <= la; i++) {
        for(int j = 1; j <= lb; j++) {

            //多个组合的和
            c[i + j - 1] += a[i] * b[j];

            //进位
            //(相当于获取 a[i] + b[i] 所得值的十位数字
            //用过除法操作获得)
            c[i + j] += c[i + j - 1] / 10;

            //(相当于获取 a[i] + b[i] 所得值的个位数字
            //实际加法所得的结果 -> 1 位
            c[i + j - 1] %= 10;
        }
    }

    //两个自然数的积的位数
    //1. 等于这两个数的位数的和
    //2. 和 - 1
    lc = la + lb;

    //消去前导零
    while(c[lc] == 0 && lc > 1) {
        lc--;
    }
    for(int i = lc; i >= 1; i--) {
        cout << c[i];
    }
    return 0;
}
