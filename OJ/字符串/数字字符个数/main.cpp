#include <bits/stdc++.h>

using namespace std;

/**
����ʱ��: 1.0 sec

�ڴ�����: 256 MB

���庯�� Digits������һ���ַ����������ַ��ĸ�����

********** Specification of Digits **********
int Digits(char *s);
 PreCondition: sָ��һ�����ȷ�ΧΪ 1 �C 80 ����Ӣ�ġ�������ɵ��ַ���
    PostCondition: ����s��ָ�ַ����������ַ� '0'��'9' �ĸ���

ֻ�谴Ҫ��д���������壬��ʹ�ø����Ĳ��Գ�������������庯������ȷ�ԡ�
��Ҫ�Ķ����Գ��򡣲�����ȷ�󣬽����Գ���ͺ�������һ���ύ��

#include <stdio.h>

********* Specification of Digits **********
int Digits(char *s) {

}

**************************************************************
int main() {
    char s[81];
    scanf("%s", s);
    printf("%d\n", Digits(s));
    return 0;
}
����
input
ecnu2018
output
4
*/

int Digits(char *s) {
    int cnt = 0;

    //��ȡ char ���鳤�� strlen()
    //char ���ַ� ->  ����ʹ�� 'x' 'g'
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] >= '0' && s[i] <= '9')
            cnt++;
    }
    return cnt;
}

int main() {
    char s[81];
    scanf("%s", s);
    printf("%d\n", Digits(s));
    return 0;
}
