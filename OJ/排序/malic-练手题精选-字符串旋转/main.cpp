#include <bits/stdc++.h>

using namespace std;

string s, t;
int main() {
    cin >> s >> t;
    int lens = s.size();
    int lent = t.size();

    //长度不相等
    if(lens != lent) {
       // cout << "No" << endl;
        return 0;
    }
    for(int i = s.size(); i>= 0; --i) {
        string temp = s.substr(i, s.size()) + s.substr(0, i);

        if(temp == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
