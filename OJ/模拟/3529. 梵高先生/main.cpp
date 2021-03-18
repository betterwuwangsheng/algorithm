#include <bits/stdc++.h>

using namespace std;

int a[22][22];

int main() {
    int n;
    scanf("%d", &n);

    ///构造图形
    for(int i = 0; i < n; i++) {
        a[i][0] = 1;
        for(int j = 0; j <= i; j++) {

            ///1 2 1
            ///1 3 3 1
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            if(i == j)
                a[i][j] = 1;
        }
    }

    ///输出图形
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            ///每行包含若干正整数，这些正整数之间用一个空格隔开（不能有多余的空格），最后一个正整数后面没有空格。
            if(j != i) {
                printf("%d ", a[i][j]);
            } else {
                printf("%d",a[i][i]);
            }
        }
        printf("\n");
    }
    return 0;
}
