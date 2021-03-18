#include <bits/stdc++.h>

using namespace std;

const int MX = 1e5;
string x, y;
int main() {
    while(cin >> x >> y) {
        int a[MX] = {0};
        int b[MX] = {0};
        int c[MX] = {0};

        int la = 0;
        int lb = 0;

        //获取长度
        la = x.length();
        lb = y.length();

        //小 - 大 ====== -(大 - 小)
        //长度相同 -> 比较字典序
        //string x 的长度 < string y 的长度 -> x < y
        if(la < lb || (la == lb && x < y)) {

            //交换减数和被减数
            swap(x, y);

            //交换长度
            swap(la, lb);

            //输出 负号
            cout << '-';
        }

        //将字符串转换为 int 数组
        for(int i = 0; i < la; i++) {
            a[la - i] = x[i] - '0';
        }
        for(int i = 0; i < lb; i++) {
            b[lb - i] = y[i] - '0';
        }

        //结果数组的长度与 string a 的长度相同
        //竖式减法
        for(int i = 1; i <= la; i++) {

            //小 - 大
            if(a[i] < b[i]) {

                //低位 + 10 -> 降维打击 (十位的 1 相当于 各个位的 10)
                a[i] += 10;

                //高位 - 1
                a[i + 1]--;
            }

            //大 - 小 -> 对应位置相减
            c[i] = a[i] - b[i];
        }

        //100 - 100 = 000 -> 0(至少有一位)
        //消去前导 0 -> 消去最高位的 0
        while((c[la] == 0) && la > 1) {

                //长度减少
                la--;
            }

        //倒序输出
        for(int i = la; i >= 1; i--) {
            cout << c[i];
        }
        cout << endl;
    }
    return 0;
}
