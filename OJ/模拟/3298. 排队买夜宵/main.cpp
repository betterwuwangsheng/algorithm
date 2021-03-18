#include <bits/stdc++.h>

using namespace std;
int main() {

    int t;
    cin >> t;

    while(t--) {
        stack<char> stk;

        string s;
        cin >> s;

        for(int i = 0; i < s.size(); ++i) {


            //栈空
            if(stk.empty()) {
                //入栈
                stk.push(s[i]);

            } else {
                char top = stk.top();
                if(top == s[i]) {
                    stk.push(s[i]);
                } else {
                    stk.pop();
                }
            }
        }
        cout << stk.size() << endl;
    }
    return 0;
}
