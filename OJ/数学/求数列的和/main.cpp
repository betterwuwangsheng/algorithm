#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

/**
Problem Description
���еĶ������£�
���еĵ�һ��Ϊn���Ժ����Ϊǰһ���ƽ�����������е�ǰm��ĺ͡�


Input
���������ж��飬ÿ��ռһ�У�����������n��n<10000����m(m<1000)��ɣ�n��m�ĺ�����ǰ������


Output
����ÿ���������ݣ���������еĺͣ�ÿ������ʵ��ռһ�У�Ҫ�󾫶ȱ���2λС����


Sample Input
81 4  81 9 3 sqrt3
2 2


Sample Output
94.73
3.41
*/
int main() {
    int m;
    double sum,n;
    while(scanf("%lf %d", &n, &m) != EOF) {
        sum = 0;
        for(int i = 0; i < m; i++) {
            sum += n;
            n = sqrt(n);
        }
        printf("%.2f\n", sum);
    }
    return 0;
}
