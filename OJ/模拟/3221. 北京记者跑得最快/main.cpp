#include <bits/stdc++.h>

using namespace std;

int main() {
    double l, v, a;
    cin >> l >> v >> a;
    for (double x = 1; x <= l; x++) {
        double delta = sqrt(v*v + 2*a*x);
        double time = (delta - v) / a;
        cout << setprecision(9) << time << endl;
    }
}
