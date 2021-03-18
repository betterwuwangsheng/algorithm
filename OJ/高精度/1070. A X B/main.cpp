#include <bits/stdc++.h>

using namespace std;
const int MX = 1e5;
string n;

int a[MX];
int b[MX];
int c[MX];
void solve(string x, string y) {

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

    //进位
    for(int i = 1; i <= la; i++) {
        for(int j = 1; j <= lb; j++) {

            //对应位置乘积之和
            c[i + j - 1] += a[i] * b[j];

            //进位(高位 + 1) -> 由于乘法可能产生 0-81
            //进位也要相加
            c[i + j] += c[i + j - 1] / 10;

            //对应位置加法结果数字
            c[i + j - 1] %= 10;
        }
    }

    //乘法的位数 -> 两数位数之和或者两数位数之和 - 1
    //两个自然数的积的位数
    //1. 等于这两个数的位数的和
    //2. 和 - 1
    lc = la + lb;

    //消去前导零
    while(c[lc] == 0 && lc > 1)
        lc--;
}
int main() {
    while(cin >> N && n != 0) {
        a[MX] = {0};
        b[MX] = {0};
        c[MX] = {0};

        //获取长度
        int la = 0;
        int lb = 0;

        int lc = 0;
        //将字符串 x 转换为 int 数组 a
        for(int i = 0; i < la; i++) {

            //倒序存储 ->  长度 - i
            a[la - i] = x[i] - '0';
        }
        for(int i = 1; i <= )
            for(int i = lc; i >= 1; i--) {
                cout << c[i];
            }
        cout << endl;
    }
    return 0;
}
