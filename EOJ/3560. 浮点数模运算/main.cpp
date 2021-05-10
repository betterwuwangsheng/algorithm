#include <bits/stdc++.h>

using namespace std;

int main() {
    long double a, b;
    cin >> a >> b;
    long long c = a / b;
    cout << fixed << setprecision(9) << a - b * c << endl;
}
