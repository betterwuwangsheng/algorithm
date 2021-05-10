#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += i;
        for (int j = 0; j <= n; ++j)
            sum += j;
    }
    cout << sum;
    return 0;
}