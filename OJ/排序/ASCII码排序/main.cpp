#include <iostream>
#include<cstdio>
using namespace std;

/**
Problem Description
���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ���


Input
���������ж��飬ÿ��ռһ�У��������ַ���ɣ�֮���޿ո�


Output
����ÿ���������ݣ����һ�У��ַ��м���һ���ո�ֿ���


Sample Input
qwe
asd
zxc


Sample Output
e q w
a d s
c x z

*/

int main()
{
    char a, b,c,t;

    while(scanf(" %c%c%c",&a,&b,&c) != EOF){//%cǰ��Ŀո�����������οհ׷���
        if(a>b) {t=a;a=b;b=t;}
        if(a>c) {t=a;a=c;c=t;}
        if(b>c) {t=b;b=c;c=t;}
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}
