#include <bits/stdc++.h>

using namespace std;

int main() {
    int year;
    scanf("%d", &year);
    /**
     * 普通闰年：为4的倍数
     * 世纪闰年：为整百的数字并且为400的倍数。
     */
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("1")
                                                              : printf("0");
    return 0;
}