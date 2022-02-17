#include <iostream>
#include <stack>

using namespace std;

string s;
char ans[110];
stack<char> stk;

int main() {
    while (cin >> s) {
        int len = s.size();

        for (int i = 0; i < len; ++i) {
            char c = s[i];
            if (c == '(') {
                // 将索引入栈 -> 便于输出是否匹配
                stk.push(i);
                ans[i] = ' ';
            } else if (c == ')') {
                if (!stk.empty()) {
                    stk.pop();
                    ans[i] = ' ';
                } else {
                    ans[i] = '?';
                }
            } else {
                ans[i] = ' ';
            }
        }

        // 将剩余的元素出栈 -> 此时占中存放的是索引
        while (!stk.empty()) {
            ans[stk.top()] = '$';

            // 出栈
            stk.pop();
        }

        cout << s << endl;
        cout << ans << endl;
    }
    return 0;
}