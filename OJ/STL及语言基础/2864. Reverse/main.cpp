#include <bits/stdc++.h>

using namespace std;

/**
����ʱ��: 2.0 sec

�ڴ�����: 256 MB

���������洮����Ϊ�ӵ�λ����λ���������Ӹ���λ�ϵ��������γɵ��ַ������� 321
���洮Ϊ 123��

�����ʽ
һ�������� 8 λ�������� N

�����ʽ
����������� N ��λ�������洮����һ���ո����

����
input
3210
output
*/
int a[9];

int main() {
    int N, cnt = 0, sum;
    scanf("%d", &N);

    cnt = 0;
    sum = 0;
    while (N) {
        a[cnt] = N % 10;
        N = N / 10;
        cnt++;
    }
    printf("%d ", cnt);

    for (int i = 0; i < cnt; i++) {
        printf("%d", a[i]);
    }
    return 0;
}
