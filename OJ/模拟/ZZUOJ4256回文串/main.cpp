#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    int len = s.length();
    for(int i = 0; i < len / 2; i++) {
        if(s[i] == s[len - 1 - i]) {
            cnt++;
        }
    }
    if(cnt == len / 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
