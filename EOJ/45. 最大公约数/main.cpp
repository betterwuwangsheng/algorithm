#include <bits/stdc++.h>

using namespace std;

//�ݹ�ʵ�����Լ��
int GCD(int a, int b) {
    if(b == 0)
        return a;
    return GCD(b, a % b);
}
//********** Specification of arrayGCD **********
int arrayGCD(int *p, int n)
/* PreCondition:
      p ָ��һ���������飬n ��ΧΪ 1-100
   PostCondition:
      ���� p ��ָ����� n ��Ԫ�ص����Լ��
*/
{
    if(n > 0) {
        return GCD(arrayGCD(p, n - 1), p[n - 1]);
    } else {
        return p[0];
    }
}

/*******************************************************/
int main() {
    int a[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d\n", arrayGCD(a, n));
    return 0;
}
