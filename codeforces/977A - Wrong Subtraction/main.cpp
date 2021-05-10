#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; ++i) {
        if (n % 10 == 0)  //末位为 0
            n /= 10;
        else  //末位非 0
            n -= 1;
    }
    cout << n << endl;
    return 0;
}