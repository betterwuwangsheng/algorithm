#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    //记录移动次数
    int cnt = 0;

    //遍历
    for (int i = 0; i < n; ++i) {
        //相邻字符相同
        if (s[i] == s[i + 1])

            //移动次数增加
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}