#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] == '-') {
        reverse(s.begin() + 1, s.end());
        int i = 1;
        while (s[i] == '0')
            s = "-" + s.substr(i + 1, s.length() - i - 1);
        cout << s << endl;
    } else {
        reverse(s.begin(), s.end());
        int i = 0;
        while (s[i] == '0')
            s = s.substr(i + 1, s.length() - i - 1);
        cout << s << endl;
    }
    return 0;
}
