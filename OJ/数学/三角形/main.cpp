#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

/**
Problem Description
���������ߣ������ж�һ���ܲ������һ�������Ρ�


Input
�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ����������������A,B,C������A,B,C <1000;


Output
����ÿ������ʵ������������߳�A,B,C����������εĻ������YES������NO��


Sample Input
2
1 2 3
2 2 2


Sample Output
NO
YES
*/
//��������֮�ʹ��ڵ�����
int main()
{
    int m;
    scanf("%d",&m);

    while(m--){
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);
        if(a + b > c && c + a > b && b + c > a)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
