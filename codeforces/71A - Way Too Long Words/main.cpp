#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    string s;
    while (n--) {
        cin >> s;
        int len = s.length();
        if (len > 10)                                    //长度超过 10
            s = s[0] + to_string(len - 2) + s[len - 1];  //显示中间字符数量
        cout << s << endl;
    }
    return 0;
}
