#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 26;
int cnt[MAXN] = {0};

int main() {

    string s;
    while(cin >> s) {
        int len = s.length();

        //转小写
        for(int i = 0; i < len; ++i) {
            s[i] = tolower(s[i]);
            cnt[s[i] - 97]++;
        }

        //排序
        sort(cnt, cnt + MAXN, greater<int>());

        ll sum = 0;
        for(int i = 0; i < MAXN; ++i)
            sum += cnt[i] * (MAXN - i);
        cout << sum << endl;
    }
    return 0;
}
