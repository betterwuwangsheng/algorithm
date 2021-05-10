#include <bits/stdc++.h>

using namespace std;
string p[][6] = {
    {"a","o","e","i","u","ü"},
    {"ā","ō","ē","ī","ū","ǖ"},
    {"á","ó","é","í","ú","ǘ"},
    {"ǎ","ǒ","ě","ǐ","ǔ","ǚ"},
    {"à","ò","è","ì","ù","ǜ"}
};
int main() {
    int T;
    cin >> T;
    int cnt = 0;
    while(T--) {
        //读入字符串
        string s;
        cin >> s;

        //获取字符串长度
        int len = s.length();

        if(s[len - 1] == '1')
            s[len - 1] = p[1][1];

        print("Case %d: %s\n", cnt++, s);
    }
    return 0;
}
