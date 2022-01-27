#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
int main() {
    ull n;
    cin >> n;
    cout << n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4 << endl;
    return 0;
}