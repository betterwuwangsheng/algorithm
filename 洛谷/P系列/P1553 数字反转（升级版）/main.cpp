#include <algorithm>
#include <iostream>

using namespace std;

string s;
int main() {
    cin >> s;

    // 获取长度
    int len = s.size();

    // 记录非数字字符的下标
    int index = 0;

    // 是数字则不操作
    for (int i = 0; i < len; ++i) {
        // 不是数字字符 -> 判断是否为数字
        if (!isdigit(s[i]))

            // 记录下标
            index = i;
    }

    int rl, ll;

    if (index) {
        ll = s.begin() + index - s.begin();
        rl = s.size() - ll - 1;
        reverse(s.begin(), s.begin() + index);
        if (rl > 1) {
            while (s[s.size() - 1] == '0') {
                s.erase(s.end() - 1);
            }
            reverse(s.begin() + index + 1, s.end());
        }
    } else {
        ll = s.size();
        rl = s.size() - ll;
        reverse(s.begin(), s.end());
    }
    while (s[0] == '0' && ll > 1)
        s.erase(s.begin());

    while (s[s.size() - 1] == '0' && rl > 1)
        s.erase(s.end() - 1);

    cout << s << endl;
    return 0;
}