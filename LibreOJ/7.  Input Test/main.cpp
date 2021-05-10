#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main() {
    ll x = 0;

    for (int i = 1; i <= 3e6; i++) {
        ll t;
        scanf("%lld", &t);
        x ^= t;
    }
    cout << x << endl;
    return 0;
}