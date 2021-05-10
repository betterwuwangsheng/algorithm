#include <bits/stdc++.h>

using namespace std;

/**
    M = N^N
    log10(M) = log10(N^N) = Nlog10(N)
    M = 10^Nlog10(N)
    Nlog10(N) = x(整数) + y(小数)
    M = 10^x + 10^y
    10^x = 10...........0最高位为 1
    10^y 取整即为所求

    //n^n = 10^x*a; 即由一个小数a乘以10的x次方得到n^n,两边取对数
	//nlgn = x + lga，所以算出nlgn，那么整数部分一定是x，小数部分一定是a
	//所以a的整数部分就是第一位数
	//example: 3^3 = 27 = (10^1)*2.7; therefore 3lg3 = 1 +lg2.7

*/
int main() {

    long long n, result;

    //整数部分
    double x;

    //小数部分
    double y;
    while(cin >> n) {
        if(n == 0)
            break;
        x = n * log10(n);

        // 取整数部分
        y=(long long)x;

        //取小数部分(数值 - 整数部分)
        x = x - y;
        result = (long long)pow(10.0, x);
        printf("%d\n", result);
    }
    return 0;
}
