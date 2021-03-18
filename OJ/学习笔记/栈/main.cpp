#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ///初始化栈
    stack<int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);

    ///栈不空 -> 输出元素
    while(!stk.empty()){
        cout << stk.top() << ' ' << endl;

        ///将栈顶元素出栈后才能输出下一元素
        stk.pop();
    }
    return 0;
}
