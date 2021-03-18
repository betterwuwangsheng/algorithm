#include <bits/stdc++.h>

using namespace std;

int CharToInt(char target) {
    if('0' <= target && target <= '9')
        return target - '0';
    else
        return target + 10 - 'A';
}

//任意进制转换
void Convert(string s, int x) {

    int num = 0;
    for(int i = 0; i < s.length(); ++i) {
        num *= x;
        num += CharToInt(s[i]);
    }

    printf("%d\n", num);
}
int main() {
    string s;
    while(cin >> s) {

        //去掉 0x
        s = s.substr(2);
        Convert(s, 16);
    }
    return 0;
}
