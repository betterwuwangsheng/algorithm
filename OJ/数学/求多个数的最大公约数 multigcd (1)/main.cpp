#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL __gcd(LL a, LL b) {
    if(b == 0)
        return a;
    a %= b;
    return __gcd(b, a);
}
int main() {
    int n;
    scanf("%d", &n);


    int num;
    while(n-- ) {
        scanf("%d", &num);

       __gcd(num)
    }

    cout << num;
    return 0;
}
