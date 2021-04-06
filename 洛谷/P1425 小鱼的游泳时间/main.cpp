#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, k, m;
    cin >> a >> b >> c >> d;
    k = c - a - 1;  // c-(a+1)
    d = d;
    m = 60 - b;
    if ((m + d) > 60) {
        k++;
        m = m - 60;
    }
    cout << k << " " << m + d;
    return 0;
}