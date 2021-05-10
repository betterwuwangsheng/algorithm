#include <bits/stdc++.h>

using namespace std;

//********** Specification of Sec2HMS **********
int Sec2HMS(int second);
/* PreCondition:
     second 是以秒数表示的一段时间，0<=时长<100小时
   PostCondition:
     返回以HHMMSS形式表示的等长的一段时间,整数中开头的0可忽略，如010010为10010，表示1小时零10秒
*/
int Sec2HMS(int second) { //TODO: your function definition

    int H = 0, M = 0, S = 0;
    H = second / 3600;
    M = (second - H * 3600) / 60;
    S = second % 60;
    return H * 10000 + M * 100 + S;
}

#include <stdio.h>

int main() {
    int second;
    scanf("%d", &second);
    printf("%d\n", Sec2HMS(second));
    return 0;
}
