#include <bits/stdc++.h>

using namespace std;

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
const int MX = 1e5;
string x, y;
int a[MX], b[MX], c[MX];
int la, lb, lc;
int main() {
//    int a, b;
//    cin >> a >> b;
//    cout << a + b << endl;

//    unsigned long long a, b;
//    cin >> a >> b;
//    cout << a + b << endl;

    //1. 字符串读入
    cin >> x >> y;

    //获得两字符串的长度
    la = x.length();
    lb = y.length();

    for(int i = 0 ; i < la; i++) {

        //2. 字符串 x 转换为 int 数组 a
        //注意：倒序存储 ->  长度 - i
        a[la - i] = x[i] - '0';
    }
    for(int i = 0 ; i < lb; i++) {

        //2. 字符串 y 转换为 int 数组 b
        //注意：倒序存储 ->  长度 - i
        b[lb - i] = y[i] - '0';
    }

    //设置 lc 的长度
    lc = max(la, lb);

    //3. 竖式加法
    //个位开始
    for(int i = 1; i <= lc; i++) {

        // c[i] 初始时默认值 0
        // += 实现进位
        c[i] += a[i] + b[i];

        //进位
        //(相当于获取 a[i] + b[i] 所得值的十位数字
        //用过除法操作获得)
        c[i + 1] = c[i] / 10;

        //(相当于获取 a[i] + b[i] 所得值的个位数字
        //实际加法所得的结果 -> 1 位
        c[i] %= 10;
    }

    //最高位有进位 -> 长度增加 1
    if(c[lc + 1] > 0)
        lc++;

    //5. 倒序输出
    for(int i = lc; i >= 1; i--) {
        cout << c[i];
    }
    return 0;
}
