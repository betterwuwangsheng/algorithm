#include <bits/stdc++.h>

using namespace std;

//记忆化
map<string, int> mp;

int main() {

    string a, b;
    cin >> a >> b;

    string x[10], y[10];

    int n = 1;
    while(cin >> x[n] >> y[n])
        n++;
    n--;

    //abcd→xud→xy→xyz。
    queue<string> Q;
    queue<int> step;

    Q.push(a);
    step.push(0);

    while(!Q.empty()) {
        if(Q.front() == b) {
            cout << step.front() << endl;
            return 0;
        }

        if(step.front() == 10) {
            Q.pop();
            step.pop();
        }

        string t = Q.front();

        if(mp.count(t)){
            Q.pop();
            step.pop();
            continue;
        }
        mp[t] = 1;

        //变换的可能性
        for(int i = 1; i <= n; ++i) {
            int p = 0;

            //找到 x[i]
            while(t.find(x[i], p) != -1) {

                p = t.find(x[i], p);
                Q.push(t.substr(0, p) + y[i] + t.substr(p + x[i].length()));

                //步数增加
                step.push(step.front() + 1);

                p++;
            }

        }
        Q.pop();
        step.pop();
    }

    cout << "NO ANSWER!" << endl;
    return 0;
}
