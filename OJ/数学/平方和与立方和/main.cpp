#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

/**
Problem Description
����һ���������������������������ż����ƽ�����Լ����������������͡�


Input
�������ݰ����������ʵ����ÿ�����ʵ������һ�У�����������m��n��ɡ�


Output
����ÿ���������ݣ����һ�У�Ӧ������������x��y���ֱ��ʾ�ö�����������������ż����ƽ�����Լ����������������͡�
�������Ϊ32λ�������Ա�������


Sample Input
1 3
2 5


Sample Output
4 28
20 152

*/
int main() {
    int m,n,evenSunOfSquares,oddCubeSum;
    while(scanf("%d %d", &m, &n) != EOF) {
        evenSunOfSquares =0;
        oddCubeSum = 0;

        //�߽������ж�
        if(m > n) {
            int temp = m;
            m = n;
            n = temp;
        }
        for(int i = m; i <= n; i++ )
            if(i % 2 == 0) { //ż��
                evenSunOfSquares += i * i;
            } else {
                oddCubeSum += i * i * i;
            }
        printf("%d %d\n",evenSunOfSquares,oddCubeSum);
    }
    return 0;
}
