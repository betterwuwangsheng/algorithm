#include <bits/stdc++.h>

using namespace std;

string a, b;
int main() {

    cin >> a >> b;

    //规则
    string x[7], y[7];

    int n = 1;

    //读入规则
    while(cin >> x[n] >> y[n])
        n++;

    n--;

    queue<string> Q;

    //记录步数
    queue<int> step;

    Q.push(a);
    step.push(0);

    while(!Q.empty()) {

        if(Q.front() == b) {
            cout << step.front();
            return 0;
        }

        if(step.front() == 10) {
            Q.pop();
            step.pop();
        }

        string t = Q.front();
        for(int i = 1; i <= n; ++i) {

            int p = 0;
            while(t.find(x[i]) != -1)
                p =
            }
    }
    return 0;
}
