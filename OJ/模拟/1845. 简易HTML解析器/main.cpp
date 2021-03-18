#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);//读入 HTML

    int pos = s.find("<br>");//寻找<br>
    while(pos != s.npos) {

        //find(start, len, replacstr)
        s.replace(s.find("<br>"), 4, "\n");
        pos = s.find("<br>"); //更新位置
    }

    cout << s;
    return 0;
}
