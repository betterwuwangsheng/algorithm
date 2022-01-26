#include <algorithm>
#include <iostream>

using namespace std;

const int MX = 100;

struct STR {
    int id;
    string s;
    int cnt;
} str[MX];

int solve(string str) {
    int cnt = 0;
    for (int i = 0; i < str.size(); ++i)
        if (str[i] == '1')
            cnt++;
    return cnt;
}

bool cmp(STR s1, STR s2) {
    if (s1.cnt == s2.cnt)
        return s1.id < s2.id;
    else
        return s1.cnt < s2.cnt;
}

int n;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        cin >> str[i].s;
        str[i].cnt = solve(str[i].s);
        str[i].id = i;
    }

    sort(str, str + n, cmp);

    for (int i = 0; i < n; ++i)
        cout << str[i].s << endl;
    return 0;
}