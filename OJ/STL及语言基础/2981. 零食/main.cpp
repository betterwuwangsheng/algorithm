#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {

    ///������
    int T;
    cin >> T;

    for(int k = 0; k < T; k++) {

        cout << "case #" << k << ":\n";

        ///������
        int n;
        cin >> n;

        ///���ȶ������С����
        priority_queue<int, vector<int>, greater<int> > s;

        for(int i = 0; i < n; i++) {

            char action;
            cin >> action;


            ///����Ϊ B p
            if(action == 'B') {

                ///�۸�
                int p;
                cin >> p;

                ///���
                s.push(p);
            } else {

                //while(!s.empty()) {
                    cout << s.top() << endl;

                    ///����
                    s.pop();
                //}
            }
        }
    }
    return 0;
}
