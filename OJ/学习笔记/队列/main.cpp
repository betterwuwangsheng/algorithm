#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    ///��ʼ������
    queue<int> q;

    ///����Ԫ��
    q.push(1);
    q.push(2);

    ///���в������Ԫ��
    while(!q.empty()){
        cout << q.front() << ' ' << endl;

        ///����ͷԪ�س��Ӳ��������һԪ��
        q.pop();
    }
    return 0;
}
