#include <bits/stdc++.h>

using namespace std;

const int MX = 1e5;
string x, y;

int main() {
    while(cin >> x >> y) {
        int a[MX] = {0};
        int b [MX] = {0};
        int c[MX] = {0};
        int la = 0, lb = 0, lc = 0;

        //获取长度
        la = x.length();
        lb = y.length();

        //将字符串转化为 int 数组 -> 数值低位存在数组低位
        for(int i = 0; i < la; i++) {
            a[la - i] = x[i] - '0';
        }
        for(int i = 0; i < lb; i++) {
            b[lb - i] = y[i] - '0';
        }

        //结果数组的长度
        lc = max(la, lb);

        //竖式加法
        for(int i = 1; i <= lc; i++) {

            //计算对应位置之和
            // += 计算进位和对应位置之和的和
            c[i] += a[i] + b[i];

            //进位 -> 获取对应位置之和的视为数字
            c[i + 1] = c[i] / 10;

            //结果对应位置数值
            //获取对应位置之和的个位数字
            c[i] %= 10;
        }

        //例如 99 + 1 = 100(最高位有进位)
        if(c[lc + 1] > 0)
            lc++;

        //倒序输出
        for(int i = lc; i >= 1; i--) {
            cout << c[i];
        }
        cout << endl;
    }
    return 0;
}
