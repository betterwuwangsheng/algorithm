#include <iostream>
#include <cstdio>

using namespace std;

int dayInMonth[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};


/**
�ж���������Ƿ�Ϊ���꣬��Ҫ�������������е�����һ����
    1. ������ܱ� 4 ����ͬʱ���ܱ� 100 ������
    2. ������ܱ�400������
*/
//�Ƿ�Ϊ����
bool isLeapYear(int year){

    //���� => ���� 1 => dayInMonthѡ��ڶ���
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
