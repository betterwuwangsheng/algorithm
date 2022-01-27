#include <bits/stdc++.h>

using namespace std;

int num[4];
int main() {
    int a, b, c;
    for (int i = 0; i < 3; ++i)
        cin >> num[i];
    sort(num, num + 3);
    int t = __gcd(num[2], num[0]);
    cout << num[0] / t << "/" << num[2] / t << endl;
    return 0;
}
