#include <bits/stdc++.h>

using namespace std;

double solve() {
    char s[10086];
    cin >> s;
    switch(s[0]) {
    case '+':
        return solve() + solve();
        break;
    case '-':
        return solve() - solve();
        break;
    case '*':
        return solve() * solve();
        break;
    case '/':
        return solve() / solve();
        break;
    default:
        return atof(s);
        break;
    }
}

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        printf("case #%d:\n", i);
        printf("%.6lf\n", solve());
    }
    return 0;
}
