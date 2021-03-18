#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 10;
int isPrime[MAXN];

void check() {

    isPrime[0] = isPrime[1] = 0;

    for(int i = 2; i <= MAXN; ++i)
        isPrime[i] = 1;

    for(int i = 2; i <= sqrt(MAXN); ++i)
        if(isPrime[i])
            for(int j = i * i; j <= MAXN; j += i)
                isPrime[j] = 0;
}
int main() {

    check();

    int n;
    while(cin >> n) {
        cout << '2';
        for(int i = 3; i <= n; ++i) {
            if(isPrime[i])
                cout << " " << i;
        }
        cout << endl;
    }
    return 0;
}
