#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    long long x;
    int i;
    while (cin >> x) {
        ll ans = 0;
        while (x) {
            ans += x / 5;
            x /= 5;
        }
        cout << ans << endl;
    }
    return 0;
}
