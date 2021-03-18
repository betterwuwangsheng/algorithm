#include <bits/stdc++.h>

using namespace std;
char out[36] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void solve() {

    long long n, r;
    cin >> n >> r;
    string output = "";
    string sign = "";
    if (n < 0) {
        sign = "-";
        n = -n;
    }
    while (n > 0) {
        output = out[n % r] + output;
        n /= r;
    }
    output = sign + output;
    cout << (output.length() ? output : "0") << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
