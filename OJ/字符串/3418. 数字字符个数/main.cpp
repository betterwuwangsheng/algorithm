#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        int cnt = 0;
        for(int i = 0; i <= (int)s.size(); i++) {
            if(isdigit(s[i]))
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
