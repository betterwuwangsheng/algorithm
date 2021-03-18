#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        //转换为小写
        s[i] = tolower(s[i]);

        //是元音
        if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' ||
            tolower(s[i]) == 'i' || tolower(s[i]) == 'o' ||
            tolower(s[i]) == 'u' || tolower(s[i]) == 'y')

            //删除
            s.erase(s.begin() + i--);
        else
            //插入
            s.insert(s.begin() + i++, '.');
    }
    cout << s << endl;
    return 0;
}
