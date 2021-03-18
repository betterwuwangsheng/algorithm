#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
    for(int i = 2; i <= (int)sqrt(x); ++i) {
        if(x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int s;
    cin >> s;

    int ans = 0;

    for(int i = 2; i < s; ++i) {
        if(isPrime(i) && isPrime(s - i))
            ans = max(ans, i * (s - i));
    }
    cout << ans << endl;
    return 0;
}
