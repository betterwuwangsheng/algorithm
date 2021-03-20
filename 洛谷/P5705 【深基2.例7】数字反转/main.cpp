#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    //翻转字符串
    reverse(s.begin(), s.end());
    int i = 0;

    //去除前导零
    while (s[i] == '0')
        s = s.substr(i + 1, s.length() - i - 1);
    cout << s << endl;
    return 0;
}
