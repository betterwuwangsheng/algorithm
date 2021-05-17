#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
string s[MAXN];

//比较大小
bool cmp(string& a, string& b) {
    return a < b;
}
int main() {
    int n;
    cin >> n;

    //读入数据
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    string t;
    cin >> t;

    //排序
    sort(s, s + n, cmp);

    for (int i = 0; i < n; ++i) {
        if (s[i].find(t) == 0)  //查找 t 在字符串出现的位置(位置为 0)
            cout << s[i] << endl;
    }
    return 0;
}