#include <bits/stdc++.h>

using namespace std;

/***删除字符串str中包含的子串substr，不进行重复删除*/
char *Filter(char *str, char const *substr) {

    string s = str;

    int lenstr = strlen(str);
    int lensubstr = strlen(substr);

    for(int i = 0; i < lenstr; ++i) {
        if(s.substr(i, lensubstr) == substr) {
            s.erase(i, i + lensubstr);
            i += lenstr - 1;
        }
    }

    str = const_cast<char *>(s.c_str());
    return str;
}


int main() {
    char s[81], x[81];
    scanf("%s%s", s, x);
    printf("%s\n", Filter(s, x));
    return 0;
}
