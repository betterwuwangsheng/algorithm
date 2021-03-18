#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    int caseNUm = 0;
    while(t--) {
        double n, m;
        cin >> n >> m;

        int a;
        double b;
        a = n / m;
        b = n / m;
        printf("case #%d:\n%.5lf\n", caseNUm++, a + b);
    }
    return 0;
}
