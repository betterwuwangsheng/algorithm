#include <iostream>
#include <cstdio>
using namespace std;

/**
��������
���������Ǽ���һЩ�������ܺ͡�


����ֵ
����ĵ�һ�а���һ������N��Ȼ����N�С�ÿ��������M��ͷ��Ȼ��M������ͬһ���и��档


�����
����ÿ������������Ӧ��һ����������ܺͣ����ұ���ע�⣬���֮����ڿհ��С�


��������
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3


�������
10

15

6

*/
int main()
{
    int N,M,sum,num;

    //���� N
    scanf("%d",&N);

    while(N--){
        scanf("%d",&M); //���� M

        sum = 0; //����

        for(int i = 0; i < M; i++){  //���
            scanf("%d",&num);
            sum += num;
        }

        printf("%d\n",sum);

        if(N){ //N = 0 ��������� => �߽�����
            printf("\n");
        }
    }
    return 0;
}
