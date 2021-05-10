#include <bits/stdc++.h>

using namespace std;

int main() {

    double x, x0, f, f1;
    x = 1.5;
    int  cnt = 0;
    do {
        x0 = x;
        f = 2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6;
        f1 = 6 * x0 * x0 - 8 * x0 + 3;
        x = x0 - f / f1;
        cnt++;
    } while(fabs(x-x0)>=1e-15);
    printf("%.2f %d\n", x, --cnt);
    return 0 ;
}
