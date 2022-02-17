#include <iostream>

using namespace std;

string s;
int main() {
    getline(cin, s);
    int len = s.size();

    int cnt = 0;
    for (int i = 0; i < len; ++i) {
        // 不是空格 -> 长度增加
        if (s[i] != ' ') {
            ++cnt;
        } else {
            // 是空格且数量 > 0
            if (cnt > 0) {
                printf("%d,", cnt);
                cnt = 0;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}