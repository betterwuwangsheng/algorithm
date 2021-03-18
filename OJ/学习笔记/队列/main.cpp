#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    ///初始化队列
    queue<int> q;

    ///插入元素
    q.push(1);
    q.push(2);

    ///队列不空输出元素
    while(!q.empty()){
        cout << q.front() << ' ' << endl;

        ///将对头元素出队才能输出下一元素
        q.pop();
    }
    return 0;
}
