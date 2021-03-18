#include <iostream>
#include<cstdio>
using namespace std;

/**
Problem Description
输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。


Input
输入数据有多组，每组占一行，有三个字符组成，之间无空格。


Output
对于每组输入数据，输出一行，字符中间用一个空格分开。


Sample Input
qwe
asd
zxc


Sample Output
e q w
a d s
c x z

*/

int main()
{
    char a, b,c,t;

    while(scanf(" %c%c%c",&a,&b,&c) != EOF){//%c前面的空格就是用来屏蔽空白符的
        if(a>b) {t=a;a=b;b=t;}
        if(a>c) {t=a;a=c;c=t;}
        if(b>c) {t=b;b=c;c=t;}
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}
