#include <bits/stdc++.h>

using namespace std;

int main() {
    int year;
    scanf("%d", &year);
    /**
     * ��ͨ���꣺Ϊ4�ı���
     * �������꣺Ϊ���ٵ����ֲ���Ϊ400�ı�����
     */
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("1")
                                                              : printf("0");
    return 0;
}