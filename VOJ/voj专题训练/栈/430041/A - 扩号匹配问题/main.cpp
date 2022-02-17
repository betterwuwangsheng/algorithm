#include <iostream>
#include <stack>

using namespace std;

string s;
char ans[110];
stack<char> stk;
int main() {
    while (cin >> s) {
        // 获取长度
        int len = s.size();

        // 遍历
        for (int i = 0; i < len; ++i) {
            char c = s[i];

            // 左括号 -> 入栈
            if (c == '(') {
                // 入栈 ()将索引入栈
                stk.push(i);

                // 占中只有左括号 -> 暂时不知道能不能匹配
                ans[i] = ' ';
            } else if (c == ')') {
                // 出栈必须判断栈是否为空
                if (!stk.empty()) {
                    // 出栈顶元素
                    stk.pop();

                    // 能匹配的有括号输出空格
                    ans[i] = ' ';
                } else {
                    // 不能匹配的右括号用 '?' 标注
                    ans[i] = '?';
                }
            } else {
                // 其他字符
                ans[i] = ' ';
            }
        }

        // 栈中剩余的左括号 -> 不能匹配的左括号用 '$' 标注
        while (!stk.empty()) {
            ans[stk.top()] = '$';
            stk.pop();
        }

        // ans[i] = 0;
        cout << s << endl;
        cout << ans << endl;
    }
    return 0;
}