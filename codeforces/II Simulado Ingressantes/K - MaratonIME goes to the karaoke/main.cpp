#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();  //获取长度
    int cnt = 1;           //记录字符数量
    for (int i = 0; i < len; ++i) {
        if (s[i] == s[i + 1])  //字符相同
            cnt++;             //字符数量增加
        else {
            printf("%c%d", s[i], cnt);
            cnt = 1;  //从一开始计数
        }
    }
    printf("\n");
    return 0;
}
