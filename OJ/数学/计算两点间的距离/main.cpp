#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/**
Problem Description
�����������꣨X1,Y1��,��X2,Y2��,���㲢��������ľ��롣


Input
���������ж��飬ÿ��ռһ�У���4��ʵ����ɣ��ֱ��ʾx1,y1,x2,y2,����֮���ÿո������


Output
����ÿ���������ݣ����һ�У����������λС����


Sample Input
0 0 0 1
0 1 1 0


Sample Output
1.00
*/
int main()
{
    float x1,y1,x2,y2, d, s;
    while(scanf("%f %f %f %f",&x1,&y1,&x2,&y2)!=EOF){
    	d=(x2-x1)*(x2-x1)+(y1-y2)*(y1-y2);
        s=sqrt(d);
        printf("%.2f\n",s);
	}
    return 0;
}
