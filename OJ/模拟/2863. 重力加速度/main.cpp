#include <bits/stdc++.h>

using namespace std;

#define g 9.8

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        double h;
        //扔下时高度
        //第一和第二层高为 5 米
        //其它各层高 3 米
        if(n >= 1 && n <= 3){
                h = 1.75 + 5 * (n - 1);
        }else{
            h = 11.75 + 3 * (n - 3);
        }

        double time = sqrt(2 * h / g);

        //浮点值可以四舍五入到若干位有效数或精度
        //这是出现在小数点前后的总位数
        //可以通过使用 setprecision 操作符来控制显示浮点数值的有效数的数量。
        cout << fixed << setprecision(3) << time << endl;
    }
    return 0;
}
