#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll x, n;
    cin >> x >> n;

    ll sum = 0;
    for (int i = x; i < x + n; ++i) {
        //周六或者周日
        if (i % 7 == 0 || i % 7 == 6)
            continue;
        sum += 250;
    }
    cout << sum;
    return 0;
}