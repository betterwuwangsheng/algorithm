#include <bits/stdc++.h>

using namespace std;

/**
单点时限: 1.0 sec

内存限制: 256 MB

定义函数 Digits，计算一个字符串中数字字符的个数。

********** Specification of Digits **********
int Digits(char *s);
 PreCondition: s指向一个长度范围为 1 – 80 的由英文、数字组成的字符串
    PostCondition: 返回s所指字符串中数字字符 '0'—'9' 的个数

只需按要求写出函数定义，并使用给定的测试程序测试你所定义函数的正确性。
不要改动测试程序。测试正确后，将测试程序和函数定义一起提交。

#include <stdio.h>

********* Specification of Digits **********
int Digits(char *s) {

}

**************************************************************
int main() {
    char s[81];
    scanf("%s", s);
    printf("%d\n", Digits(s));
    return 0;
}
样例
input
ecnu2018
output
4
*/

int Digits(char *s) {
    int cnt = 0;

    //获取 char 数组长度 strlen()
    //char 是字符 ->  所以使用 'x' 'g'
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] >= '0' && s[i] <= '9')
            cnt++;
    }
    return cnt;
}

int main() {
    char s[81];
    scanf("%s", s);
    printf("%d\n", Digits(s));
    return 0;
}
