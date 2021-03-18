#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned num;
    while (cin >> num) {
        int cnt1 = 0;
        while (num) {
            unsigned temp = num % 2;
            if (temp)
                cnt1++;
            num >>= 1;
        }
        if (cnt1 == 0)
            printf("%d,%d:%d\n", cnt1, 0, 32);
        else
            cout << cnt1 << "," << cnt1 / __gcd(32, cnt1) << ":"
                 << 32 / __gcd(32, cnt1) << endl;
    }
    return 0;
}
