#include <bits/stdc++.h>

/**
题目描述
高精度加法，相当于a+b problem，不用考虑负数.

输入格式
分两行输入。a,b \leq 10^{500}a,b≤10
500


输出格式
输出只有一行，代表a+ba+b的值

输入输出样例
输入 #1复制
1
1
输出 #1复制
2
输入 #2复制
1001
9099
输出 #2复制
10100
*/
using namespace std;

const int MX = 1e5 + 10;
string x, y;
int a[MX], b[MX], c[MX];
int la, lb;

int main() {

    //读入很长的数字
    cin >> x >> y;

    //获得长度
    la = x.length();
    lb = y.length();

    // x < y (比较字典序 -> 长度相同时可以进行大小比较 x < y) -> swap(x , y)
    // 改进 -> 比较长度(长度长的大)
    //      -> 长度相同时(比较字典序)
    if((la < lb) || ((la == lb) && (x < y))) {

        //交换数字
        swap(x, y);

        //同时交换长度 -> 对应数字的长度交换后改变
        swap(la, lb);

        //输出 -> 负号(小 - 大) -> 负数
        cout << '-';
    }
    //将字符串 x 转换为 int 数组 a
    for(int i = 0; i < la; i++) {
        a[la - i] = x[i] - '0';
    }
    //将字符串 y 转换为 int 数组 b
    for(int i = 0; i < lb; i++) {
        b[lb - i] = y[i] - '0';
    }

    //竖式减法
    for(int i = 1; i <= la; i++) {

        //比较对应位置大小
        //小 - 大
        if(a[i] < b[i]) {

            //借位
            //低位 + 10
            a[i] += 10;

            //高位 - 1
            a[i + 1]--;
        }

        //大 - 小
        //正常减
        c[i] = a[i] - b[i];
    }

    //减法答案至少 1 位
    //最高位是否为 0
    //0 -> 长度 -1
    //可能有多个 0 -> while 消去
    while(c[la] == 0 && la > 1)
        la--;

    for(int i = la; i >= 1; i--) {
        cout << c[i];
    }
    return 0;
}
