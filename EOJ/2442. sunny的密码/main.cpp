#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    map<char, string> mp;
    for(int i = 0; i < 26; ++i) {
        if(i <= 8)
            mp[i + 'a'] = "0" + to_string(i + 1);
        else
            mp[i + 'a'] = to_string(i + 1);
    }

    while(t--) {
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); ++i) {
            if(s[i] >= 'a' && s[i] <= '9')
                cout << mp[s[i]];
            else
                cout << mp[s[i]];
        }
        printf("\n");
    }
    return 0;
}
