#include <bits/stdc++.h>

using namespace std;

long long fact(int n) {
    if(n == 0 || n == 1)
        return 1;
    return fact(n - 1) * n;
}
int main() {
    int n;
    cin >> n;

    long long fac[n + 1] {};
    fac[0] = fac[1] = 1;
    for(int i = 2; i <= n; i++) {
        fac[i] = fac[i - 1] * i;
    }

    cout << fac[n] << endl;
    cout << fact(n) << endl;
    return 0;
}
