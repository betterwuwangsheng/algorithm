#include <cstdio>
int main() {
    long double a, sum;  // long double 保证精度
    while (scanf("%Lf", &a) != EOF)
        sum += a * 1000000;  //去除小数部分，直接乘，变成整数
    printf("%.5Lf", sum / 1000000);  //除回来
    return 0;
}