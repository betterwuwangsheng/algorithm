#include <iostream>
#include <cstdio>
using namespace std;

/**
����ʱ��: 2.0 sec

�ڴ�����: 256 MB

����һ���Ǹ����� , ��Ԫһ�η��̣�


�ķǸ��������ǲ�Ψһ�ġ�

��̼��㲻ͬ��ĸ�����

���磺 ʱ�� 1 ���� ;  ʱ�� 2 ����  ��

�����ʽ
�� 1 �У�����  () Ϊ������

�� 2 ��  �У�ÿһ�������е� ��

�����ʽ
����ÿ�����⣬��һ���������ĸ�����

����
input
3
0
10
1000
output
1
23
7049112

*/

double search(double low){
    return
}
int main()
{
    int T;  //��ȡ������
    scanf("%d",&T);

    while(T--){

        //��ȡ  n
        int n, cnt=0; // cnt ���ڼ���
        scanf("%d",&n);

        //�������
        for(int w = 0; w <= n / 4; w++)
            for(int x = 0; x <= n / 3; x++)
                for(int y = 0; y <= n / 2; y++)
                {
                    if(4 * w + 3 * x + 2 * y <= n)
                        cnt++;
                }
            printf("%d\n",cnt);
    }
    return 0;
}
