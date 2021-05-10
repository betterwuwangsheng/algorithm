#include <bits/stdc++.h>

using namespace std;

const int MAXN = 35;

int a[MAXN][MAXN];
int main() {
    int n;
    while(scanf("%d", &n) != EOF && n) {


        ///构造图形
        for(int i = 0; i < n; i++) {
            a[i][0] = 1;//第一列全为 1
            for(int j = 0; j <= i; j++) {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                if(i == j)//每行最后一个元素行列相等值为 1
                    a[i][j] = 1;
            }
        }

        ///输出图形
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                if(j != i)
                    printf("%d ", a[i][j]);
                else
                    printf("%d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
