#include <bits/stdc++.h>

using namespace std;

void sort(char (*p)[81], int n)
/* PreCondition:
        p ָ��һ����ά�ַ����飬n �Ƿ�ΧΪ 2-100 ������Ԫ�ظ���
    PostCondition:
        ��Ҫ��������������
        �����ַ��������ַ��������������
        ���ַ���ͬ���ַ��������ַ���������ֵ������������
*/
{}

int main() {
    char s[100][81];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", s[i]);
    sort(s, n);
    for (i = 0; i < n; i++)
        printf("%s\n", s[i]);
    return 0;
}