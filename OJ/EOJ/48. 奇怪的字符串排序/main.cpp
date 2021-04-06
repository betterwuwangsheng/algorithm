#include <bits/stdc++.h>

using namespace std;

void sort(char (*p)[81], int n)
/* PreCondition:
        p 指向一个二维字符数组，n 是范围为 2-100 的数组元素个数
    PostCondition:
        按要求对数组进行排序
        按照字符串的首字符的升序进行排序
        首字符相同的字符串按照字符串本身的字典序降序进行排序
*/
{}

int main() {
    char s[100][81];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", s[i]);
    sort(s, n);
    for (i = 0; i < n; i++)
        printf("%s\n", s[i]);
    return 0;
}