#include <bits/stdc++.h>

using namespace std;

long long quick_pow(int a, int b) {
    if(b == 0)
        return 1;
    else if(b == 1)
        return a;
    else if(b & 1)
        return a * quick_pow(a, b - 1);
    else {
        long long res = quick_pow(a, b >> 1);
        return res * res;
    }
}
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        for(int cnt = 0; cnt < n; cnt++) {
            int a, b;
            long long res = 0;
            cin >> a >> b;
            res = quick_pow(a, b);
            printf("case #%d:\n%lld\n", cnt, res);
        }
    }
    return 0;
}
