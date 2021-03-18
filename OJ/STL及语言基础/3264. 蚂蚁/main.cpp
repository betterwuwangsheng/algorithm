# include <bits/stdc++.h>

using namespace std;

stack<int> st;
int main() {

    //蚂蚁数量
    int N;
    cin >> N;
    int res = N;
    while(N--) {
        int s, dir;
        cin >> s >> dir;

        //向右 -> 入栈
        if(dir == 1)
            st.push(s);

        //向左
        else if(dir == 0) {

            //栈不为空
            while(!st.empty()) {

                //向左的蚂蚁更大
                if(s > st.top()) {

                    //数量减少
                    res--;

                    //大的吃掉小的
                    st.pop();
                } else {

                    //向左的蚂蚁小 -> 数量减少
                    res--;

                    //跳出循环
                    break;
                }
            }

        }
    }

    cout << res;
    return 0;
}
