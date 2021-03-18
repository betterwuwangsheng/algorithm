#include <bits/stdc++.h>

using namespace std;

/**
单点时限: 2.0 sec

内存限制: 256 MB

有 3 个整数 a,b,c, 要求按大小顺序把它们输出 .

输入格式
3 个整数 a,b,c.

输出格式
按从小到大的顺序输出 .
*/

int a[3];
int main() {

    while(scanf("%d", &a[0]) != EOF) {
        for(int i = 1; i < 3; i++) {
            scanf("%d",&a[i]);
        }
    }

    sort(a, a+3);

    for(int i = 0; i < 3; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
