#include <bits/stdc++.h>

using namespace std;

#define N 80
int count(char s[], char t[])
/* precondition: s �� t �������ַ�����t �����ǿմ����� t �����ص�
   postcondition: ���� t �� s �г��ֵĴ���
*/
{
    // TODO: your function definition
    int cnt = 0;
    for (char* it = s; *it != '\0'; ++it)
        if (*it == *t) {
            char *i = it, *j = t;
            while (*i != '\0' && *j != '\0' && *i == *j)
                ++i, ++j;
            if (*j == '\0') {
                ++cnt;
                it = i - 1;
            }
        }
    return cnt;
}
/***************************************************************/

int main() {
    char s[N + 1], t[N + 1];
    scanf("%s%s", s, t);
    //********** count is called here ******************
    printf("%d\n", count(s, t));
    //**************************************************
    return 0;
}
