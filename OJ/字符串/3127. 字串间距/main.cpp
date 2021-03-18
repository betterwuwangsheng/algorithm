#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    int cnt = 0;
    while(T--) {
        string s1, s2, s;
        cin >> s1 >> s2 >> s;

        //若查找 find() 函数和其他函数没有搜索到期望的字符（或子串），则返回 npos；
        //若搜索成功，则返回搜索到的第 1 个字符或子串的位置。
        //其中，npos 是一个无符号整数值，初始值为 -1。当搜索失败时， npos 表示“没有找到（not found）”或“所有剩佘字符”。
        int pos_x = s.find(s1);

        //rfind(str)是从字符串右侧开始匹配 str ，并返回在字符串中的位置（下标）；
        int pos_y = s.rfind(s2);

        int res = 0;

        //其中一个字符串不在 s 中
        if (pos_x == -1 || pos_y == -1) {
            res = 0;
        } else {

            //位置相同
            if (pos_x == pos_y) {
                res = 0;
            } else if (pos_x > pos_y) {
                pos_x = s.rfind(s1);
                pos_y = s.find(s2);
                res = pos_x - pos_y - s2.length();
            } else {
                res = pos_y - pos_x - s1.length();
            }
        }
        cout << "case #" << cnt++ << ":" << endl << res << endl;
    }
    return 0;
}
