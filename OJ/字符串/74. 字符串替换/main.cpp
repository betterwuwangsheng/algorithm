#include <bits/stdc++.h>

using namespace std;

char s[10001];

int main() {
    cin >> s;
    int a = 0;
    while (s[a]) {
        string s1, s2;
        while (!(s[a] <= '9' && s[a] >= '0') && s[a]) {
            s1 += s[a];
            a++;
        }
        while (s[a] <= '9' && s[a] >= '0') {
            s2 += s[a];
            a++;
        }
        if (s2 == "") {
            cout << s1;
            continue;
        }
        int n = stoi(s2);
        while (n--) {
            cout << s1;
        }
    }
    return 0;
}
