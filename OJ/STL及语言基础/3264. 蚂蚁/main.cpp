#include <bits/stdc++.h>

using namespace std;

stack<int> st;
int main() {
    //蚂蚁数量
    int N;
    cin >> N;
    int res = N;
    while (N--) {
        int s, dir;
        cin >> s >> dir;

        //向右 -> 入栈
        if (dir == 1)
            st.push(s);

        //向左
        else if (dir == 0) {
            //栈不为空
            while (!st.empty()) {
                //大的留下
                if (s > st.top()) {
                    res--;
                    st.pop();
                } else {
                    res--;
                    break;
                }
            }
        }
    }
    cout << res;
    return 0;
}
