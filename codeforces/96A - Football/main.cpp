#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    //查找连续的几个字符 -> 在字符串中查找该字符串
    // s.fing(str)
    //成功 -> 返回位置
    //不成功 -> -1
    if (s.find("1111111") != -1 || s.find("0000000") != -1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
