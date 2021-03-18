#include <bits/stdc++.h>

using namespace std;

/**
    辗转相除法
*/

//求最大公因数
int getGreatestCommonFactor(int n, int m) {
    if(n < m) {
        int temp = n;
        n = m;
        m = temp;
    }
    //余数
    int r = n % m;

    while(r) {

        //除数作为新的被除数
        n = m;

        //余数作为新的除数
        m = r;

        //求余
        r = n % m;
    }
    return m;
}
int main() {
    int n, m,o;
    scanf("%d %d %d", &n, &m, &o);

    int temp = getGreatestCommonFactor(n,m);
    int res = getGreatestCommonFactor(temp, o);
    //最大公约数是除数
    printf("%d\n", res);
    return 0;
}
