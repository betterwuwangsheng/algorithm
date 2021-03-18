#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {

    ///问题数
    int T;
    cin >> T;

    for(int k = 0; k < T; k++) {

        cout << "case #" << k << ":\n";

        ///操作数
        int n;
        cin >> n;

        ///优先队列输出小数据
        priority_queue<int, vector<int>, greater<int> > s;

        for(int i = 0; i < n; i++) {

            char action;
            cin >> action;


            ///操作为 B p
            if(action == 'B') {

                ///价格
                int p;
                cin >> p;

                ///入队
                s.push(p);
            } else {

                //while(!s.empty()) {
                    cout << s.top() << endl;

                    ///出队
                    s.pop();
                //}
            }
        }
    }
    return 0;
}
