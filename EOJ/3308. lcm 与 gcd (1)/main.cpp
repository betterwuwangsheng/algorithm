#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {

    int n, m;
    while(cin >> n >> m) {

        LL sum = 0;
        vector<LL> gcd;
        vector<LL> lcm;

        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= m; ++j) {
                LL g = __gcd(i, j);
                LL l = i * j / g;
//                printf("i=%d: j=%d gcd(%d,%d)=%d\n",i,j,i,j,g);
//                printf("i=%d: j=%d lcm(%d,%d)=%d\n",i,j,i,j,l);
                gcd.push_back(g);
                lcm.push_back(l);
            }
        }

        int len = gcd.size();
        for(int i = 0, j = i; i < len && j < len; ++i, ++j)
            sum = sum + lcm[i] / gcd[j];
        cout << sum % 1000000007 << endl;
    }
    return 0;
}
