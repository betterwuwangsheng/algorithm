#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;

    int cnt = 0;
    while (a != 1) {
        a /= 2;
        cnt++;
    }

    cout << cnt + 1;
    return 0;
}