#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    if (a * a > b * c)
        cout << "Alice";
    else
        cout << "Bob";
    return 0;
}