#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ///��ʼ��ջ
    stack<int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);

    ///ջ���� -> ���Ԫ��
    while(!stk.empty()){
        cout << stk.top() << ' ' << endl;

        ///��ջ��Ԫ�س�ջ����������һԪ��
        stk.pop();
    }
    return 0;
}
