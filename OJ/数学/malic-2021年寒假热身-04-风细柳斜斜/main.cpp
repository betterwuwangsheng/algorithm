#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;
int isPrime[MAXN];

void check() {
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2; i <= MAXN; ++i)
        isPrime[i] = 1;

    for(int i = 2; i * i <= MAXN; ++i)
        if(isPrime[i])
            for(int j = i * i; j <= MAXN; j += i)
                isPrime[j] = 0;
}
int main() {
    check();
    int n;
    while(cin >> n) {
        for(int i = 0; i <= MAXN; ++i) {
            if(isPrime[i] && i >= n) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
