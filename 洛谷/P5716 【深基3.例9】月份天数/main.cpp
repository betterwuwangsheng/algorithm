#include <bits/stdc++.h>

using namespace std;

//每个月的天数
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int year, m;

    cin >> year >> m;

    //判断是否为闰年
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

        //修改闰年而二月的天数
        month[2] = 29;

    //输出天数
    cout << month[m];
    return 0;
}