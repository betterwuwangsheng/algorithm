#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

/**
Problem Description
��ʵ���ľ���ֵ��


Input
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ����


Output
����ÿ���������ݣ�������ľ���ֵ��Ҫ��ÿ���������һ�У����������λС����


Sample Input
123

-234.00


Sample Output
123.00
234.00
*/
int main() {
    double num, ans;

    while (scanf("%lf", &num) != EOF) {
        ans = abs(num);
        printf("%.2lf\n", ans);
    }
    return 0;
}
