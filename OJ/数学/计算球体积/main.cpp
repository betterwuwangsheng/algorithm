#include <iostream>
#include<cstdio>
#include<cmath>

#define PI 3.1415927
using namespace std;

/**
Problem Description
��������İ뾶ֵ��������������


Input
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ������ʾ��İ뾶��


Output
�����Ӧ��������������ÿ���������ݣ����һ�У�������������λС����


Sample Input
1
1.5


Sample Output
4.189
14.137

*/
int main()
{
    double r,v;
    while(scanf("%lf",&r) != EOF){
        v = (PI * r * r * r * 4) / 3;
        printf("%.3lf\n",v);
    }
    return 0;
}
