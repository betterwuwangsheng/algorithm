#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const LL MAXN = 1e18 + 10;
int fi[MAXN];

void init() {
    fi[1] = 1;
    fi[2] = 2;

    for(int i = 3; i < MAXN; ++i)
        fi[i] = fi[i - 1] + fi[i - 2];
}
int main() {
    int t;
    cin >> t;
    int caseNum = 0;
    while(t--) {
        int n;
        cin >> n;

        printf("case #%d:\n%d\n", caseNum++, );
    }
    return 0;
}
