#include <bits/stdc++.h>

using namespace std;

double a, b, c, d;
//方程
double f(double x) {
    return ((((a * x) + b) * x + c) * x + d);
}

int main() {
    cin >> a >> b >> c >> d;
    //记录根的数量
    int cnt = 0;
    for (double i = -100.0; i < 100.0; i += 1.0) {
        //数量为 3 结束循环
        if (cnt == 3)
            break;
        //根与根之差的绝对值 >= 1
        double f1 = f(i), f2 = f(i + 1.0);
        //式方程的解
        if (f1 == 0.0) {
            //输出
            cout << i << " ";
            //数量增加
            cnt++;
        }

        //零点定理
        if (f1 * f2 < 0.0) {
            //二分
            while (f1 < f2) {
                //中间位置
                double mid = (f1 + f2) / 2;
                if ()
            }
        }
    }

    return 0;
}