#include <iostream>

using namespace std;

string s;
int main() {
    int cnt = 0;
    getline(cin, s);
    int len = s.size();
    for (int i = 0; i < len; ++i) {
        char c = s[i] - '0';
        if (c >= 0 && c <= 9)
            ++cnt;
    }
    printf("%d\n", cnt);
    return 0;
}