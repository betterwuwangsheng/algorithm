/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/
#include <bits/stdc++.h>

using namespace std;

unsigned b2i(char s[])
/* PreCondition:  s 是由 0 和 1 组成的字符串，且字符串长度不超 32
   PostCondition: 返回与字符串 s 对应的十进制数
*/
{
    unsigned res = 0;
    unsigned len = strlen(s);
    //TODO: your function definition
    for(unsigned i = 0; i < len; i++) {

        // ch - '0' -> 数字 否则为 ascii 码
        res += (s[i] - '0') * pow(2, strlen(s) - i - 1);
    }
    return res;
}
/***************************************************************/

#define N 32
int main() {
    char s[N + 1];
    scanf("%s", s);
//********** b2i is called here ********************
    printf("%u\n", b2i(s));
//**************************************************
    return 0;
}
