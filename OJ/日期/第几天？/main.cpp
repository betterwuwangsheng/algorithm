#include <iostream>
#include <cstdio>

using namespace std;

int dayInMonth[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};


/**
判断任意年份是否为闰年，需要满足以下条件中的任意一个：
    1. 该年份能被 4 整除同时不能被 100 整除；
    2. 该年份能被400整除。
*/
//是否为闰年
bool isLeapYear(int year){

    //闰年 => 返回 1 => dayInMonth选择第二行
    return ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0);
}

int main()
{
    int year,month,day;
    while(scanf("%d %d %d",&year, &month, &day) != EOF){
        int ans = 0;
        int row = isLeapYear(year);

        for(int i = 0; i < month; i++){
            ans += dayInMonth[row][i];
        }
        ans += day;
        printf("%d\n",ans);
    }
    return 0;
}
