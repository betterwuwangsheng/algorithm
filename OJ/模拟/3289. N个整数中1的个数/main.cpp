#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL check(LL n) {
    int cnt = 0;
    while(n) {
        int temp = n % 10;
        if(temp == 1)
            cnt++;
        n /= 10;
    }
    return cnt;
}
int main() {
    int t;
    cin >> t;
    LL caseNum = 0;
    while(t--) {
        LL sum = 0;
        LL n;
        cin >> n;
        for(int i = 1; i <= n; ++i)
            sum += check(i);
        printf("case #%lld:\n%lld\n", caseNum++, sum);
    }
    return 0;
}
