#include <iostream>
#include <cstdio>
using namespace std;

/**
��������
���������Ǽ���һЩ�������ܺ͡�


����ֵ
��������������������һ����������һ�С�ÿ�������������N��ͷ��Ȼ����ͬһ���и���N��������


�����
����ÿ������������Ӧ��һ�������N���������ܺͣ�����������Ϊÿһ�����һ�������


��������
4 1 2 3 4
5 1 2 3 4 5


�������
10
15
*/
int main()
{
    int N,num,sum;

    while(scanf("%d",&N) != EOF){
        sum = 0;
        //for(int i = 0; i < N; i++){
        while(N--){
            scanf("%d",&num);
            sum += num;
       }
        printf("%d\n",sum);
    }
    return 0;
}
