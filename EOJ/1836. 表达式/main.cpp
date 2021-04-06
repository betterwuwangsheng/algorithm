#include <bits/stdc++.h>

using namespace std;

int main() {

    int num;

    //操作符栈
    stack<string> op;

    //操作数栈
    stack<int> digital;

    cin >> num;
    while(num) {
        op.push(num);
    }
    return 0;
}
