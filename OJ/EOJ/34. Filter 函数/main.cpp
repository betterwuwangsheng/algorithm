#include <bits/stdc++.h>

using namespace std;

/***ɾ���ַ���str�а������Ӵ�substr���������ظ�ɾ��*/
char* Filter(char* str, char const* substr) {
    string s = str;

    int lenstr = strlen(str);
    int lensubstr = strlen(substr);

    for (int i = 0; i < lenstr; ++i) {
        if (s.substr(i, lensubstr) == substr) {
            s.erase(i, lensubstr);
            i += lenstr - 1;
        }
    }

    str = const_cast<char*>(s.c_str());
    return str;
}

int main() {
    char s[81], x[81];
    scanf("%s%s", s, x);
    printf("%s\n", Filter(s, x));
    return 0;
}
