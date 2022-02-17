#include <iostream>
#include <stack>

using namespace std;

char c;
stack<double> num_stk;
double t, ans, num, top;

int main() {
    // 接收第一组
    while (scanf("%lf%c", &num, &c) != EOF) {
        if (num == 0 && c == '\n')
            break;
        num_stk.push(num);

        // 续
        while (scanf("%c%lf", &c, &num)) {
            if (c == '+')
                num_stk.push(num);
            else if (c == '-')
                num_stk.push(-num);
            else if (c == '*') {
                // 获取栈顶元素
                top = num_stk.top();
                t = top * num;

                // 栈顶元素出栈 -> 放入新的计算结果
                num_stk.pop();
                num_stk.push(t);
            } else if (c == '/') {
                // 获取栈顶元素
                top = num_stk.top();
                t = top / num;

                // 栈顶元素出栈 -> 放入新的计算结果
                num_stk.pop();
                num_stk.push(t);
            }

            // 行尾的换行符 -> 结束
            if (getchar() == '\n')
                break;
        }

        ans = 0;

        // 栈非空
        while (!num_stk.empty()) {
            ans += num_stk.top();
            num_stk.pop();
        }

        printf("%.2lf\n", ans);
    }
    return 0;
}