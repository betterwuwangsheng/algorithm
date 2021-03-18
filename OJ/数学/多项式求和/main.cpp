#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/**
Problem Description
����ʽ���������£�
1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
������������ö���ʽ��ǰn��ĺ͡�


Input
����������2����ɣ�������һ��������m��m<100������ʾ����ʵ���ĸ������ڶ��а���m��������������ÿһ������(������Ϊn,n<1000������ö���ʽ��ǰn��ĺ͡�


Output
����ÿ������ʵ��n��Ҫ���������ʽǰn��ĺ͡�ÿ������ʵ�������ռһ�У��������2λС����


Sample Input
2
1 2


Sample Output
1.00
*/
int main() {

    int m;
    scanf("%d", &m);

    while(m--) {

        int num;
        scanf("%d", &num);

        double sum = 0;
        //���
        for(int i = 1; i <= num; i++) {
            if(i % 2 == 1) {
                sum += 1.0 / i; //sum Ϊ˫���� ������
            } else {
                sum -= 1.0 / i;
            }
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}
