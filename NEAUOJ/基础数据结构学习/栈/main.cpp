#include <iostream>

// 引入栈的头文件
#include <stack>

using namespace std;

stack<int> st;
string s;

bool check() {
    for (char c : s) {
        // 左括号 -> 入栈
        if (c == '(')
            st.push(c);

        // 右括号
        else if (c == ')') {
            // 栈为空或者栈顶不为左括号
            // 栈中只能进入左括号
            // 栈的关键是判断栈是不是空战
            if (st.empty())  // -> )
                return false;
            // 出栈顶元素 '('
            st.pop();
        }
    }

    // 栈为空
    if (st.empty())  // -> (())
        return true;

    // 栈不为空
    return false;  // -> (()))
}

int main() {
    // 括号匹配
    cin >> s;

    // 判断括号是否匹配
    if (check())
        printf("YES!");
    else
        printf("NO");

    // 判断栈是否为空
    // st.empty();

    // 入栈
    // st.push(2);

    // 出栈 -> 栈顶元素
    // st.pop();

    // 获取栈顶元素
    // st.top();

    // 栈中的元素数量
    // st.size();

    // st.push(3);
    // st.push(2);
    // st.push(1);

    // printf("st.size(): %d\n", st.size());
    // printf("st.top(): %d\n", st.top());
    // st.pop();

    // printf("st.size(): %d\n", st.size());
    // printf("st.top(): %d\n", st.top());
    // st.pop();

    // printf("st.size(): %d\n", st.size());
    // printf("st.top(): %d\n", st.top());
    // st.pop();

    // printf("st.top(): %d\n", st.top());
    // printf("st.size(): %d\n", st.size());
    // cout << "isEmpty?: " << st.empty() << endl;
    return 0;
}