#include <bits/stdc++.h>

using namespace std;

/*/////////////////////////////////////////////////////*/
int gcd(int a, int b) {
    //TODO: your definition
    if (b == 0)
        return a;

    //递归实现
    return gcd(b, a % b);
}
/*/////////////////////////////////////////////////////*/
/***************************************************************/
/*                                                             */
/*  DON'T MODIFY THIS FILE ANYWAY!                             */
/*                                                             */
/***************************************************************/
//********** Specification of gcd **********
//int gcd(int a, int b);
/* PreCondition:
a and b are integers ranging from 1 to 1000,000,000
PostCondition:
return the greatest common divisor of a and b
*/
void solve() {
    int a,b;
    scanf("%d%d",&a,&b);
//********** gcd is called here **********
    printf("%d\n", gcd(a,b));
//****************************************
}
int main() {
    int i,t;
    scanf("%d\n",&t);
    for (i = 0 ; i < t; i++) {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;
}
