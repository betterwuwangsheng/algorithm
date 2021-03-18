#include <bits/stdc++.h>

using namespace std;

//递归实现最大公约数
int GCD(int a, int b) {
    if(b == 0)
        return a;
    return GCD(b, a % b);
}
//********** Specification of arrayGCD **********
int arrayGCD(int *p, int n)
/* PreCondition:
      p 指向一个整数数组，n 范围为 1-100
   PostCondition:
      返回 p 所指数组的 n 个元素的最大公约数
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
