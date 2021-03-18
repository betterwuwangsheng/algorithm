#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, k;
    // scanf("%d %d %d", &m, &n, &k);

    while(scanf("%d %d %d", &m, &n, &k) != EOF) {
        queue<int> men;
        queue<int> women;

        for(int i = 1; i <= m; i++) {
            men.push(i);
        }

        for(int i = 1; i <= n; i++) {
            women.push(i);
        }

        for(int i = 1; i <= k; i++) {
            int a = men.front();
            men.push(a);
            men.pop();
            int b = women.front();
            women.push(b);
            women.pop();

            cout << a << " " << b << endl;;
        }
    }
    return 0;
}
