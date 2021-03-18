#include <bits/stdc++.h>

using namespace std;

//定义误差
#define X 1e-9

//开根号 -> 牛顿迭代法
long long squint(long long num) {
    long long res = num, y = 0;
    while(fabs(res - y) > X) {
        y = res;

        //X(n+1)=[X(n)+p/Xn]/2
        res = ceil(0.5 * (res + 1.0 * num / res));
    }
    return res;
}

int main() {
    long long num;
    while(scanf("%lld", &num) != EOF) {
        cout << squint(num) << endl;
    }
    return 0;
}
