#include <iostream>
#include <string>
using namespace std;

void solve() {
    string str;
    cin >> str;
    for (int i = 1; i < str.size(); ++i) {
        while (str[i] < str[i - 1]) {
            for (int j = i; j < str.size(); ++j)
                str[j] = '9'; // 后面的置9。
            while (--str[--i] < '0')
                str[i] = '9'; // 退位。
        }
    }
    printf("%s\n", str.substr(str.find_first_not_of('0')).data());
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        printf("case #%d:\n", i);
        solve();
    }
}
