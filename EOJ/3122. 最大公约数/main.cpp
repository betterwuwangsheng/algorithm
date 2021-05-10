#include <bits/stdc++.h>

using namespace std;

/**
    辗转相除法
*/
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    //n / m(n > m)
    // n < m -> 交换
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

    //最大公约数是除数
    printf("%d\n", m);
    return 0;
}
