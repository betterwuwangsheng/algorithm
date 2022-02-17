// #include <iostream>
// #include <stack>

// using namespace std;

// string str;

// struct NODE {
//     char c;
//     int id;
// } node;

// void solve(string s) {
//     int len = s.size();
//     stack<NODE> stk;

//     for (int i = 0; i < len; ++i) {
//         // 减少代码的书写
//         char c = s[i];
//         NODE ndoe, n;
//         node.c = c;
//         node.id = i + 1;

//         // 是左括号 -> 入栈
//         if (c == '(')
//             stk.push(node);

//         // 是右括号
//         else if (c == ')') {
//             // 栈非空
//             if (!stk.empty()) {
//                 // 获取栈顶元素
//                 n = stk.top();

//                 // 出栈顶元素
//                 printf("%d %d\n", n.id, i + 1);
//                 stk.pop();
//             } else
//                 printf("No\n");
//         }
//     }
//     // 最后栈非空 -> 匹配失败
//     if (!stk.empty())
//         printf("No\n");
//     printf("Yes\n");
// }

// int main() {
//     cin >> str;
//     solve(str);
//     return 0;
// }
#include <iostream>
#include <stack>

using namespace std;

const int MX = 60005;
int res[MX] = {0};

string str;

/**
 * 这道题学会了如何记录栈中之前的序号
 * 使用一个数组来进行映射 -> 通过映射 (a[stack.top()] = i)
 * 记录匹配的符号之间的序号对应关系
 */
int solve(string s) {
    int len = s.size();
    stack<int> stk;
    for (int i = 0; i < len; ++i) {
        // 减少代码的书写
        char c = s[i];

        // 是左括号 -> 入栈 -> 只有 ( 入栈
        if (c == '(') {
            // 将序号入栈
            stk.push(i);
        } else if (c == ')') {  // 是右括号 (())
            // 栈非空
            if (!stk.empty()) {
                // 获取栈顶元素
                int t = stk.top();

                // ( 对应到 ) 的标号
                res[t] = i;

                // 出栈顶元素
                stk.pop();
            } else {  // -> )
                printf("No\n");
                // 结束
                return 0;
            }
        }
    }

    // 最后栈空 -> 匹配成功
    if (stk.empty()) {
        printf("Yes\n");

        for (int j = 0; j < MX; j++) {
            if (res[j] != 0) {
                cout << j + 1 << " " << res[j] + 1 << endl;
            }
        }
    } else
        printf("No\n");
    return 0;
}

int main() {
    cin >> str;
    solve(str);
    return 0;
}