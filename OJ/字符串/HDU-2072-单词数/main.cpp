#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    while(getline(cin, s)) {
        if(s == "#")
            break;
        int cnt = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == ' ')
                cnt++;
        }
        cout << ++cnt << endl;
    }
    return 0;
}
