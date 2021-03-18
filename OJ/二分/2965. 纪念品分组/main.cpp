#include <bits/stdc++.h>

using namespace std;

const int MX = 3e4 + 10;
int price[MX];

int main() {
    int w;

    while(scanf("%d", &w) != EOF) {

        int n;
        scanf("%d", &n);

        for(int i = 1; i <= n; i++) {
            scanf("%d", &price[i]);
        }

        //排序
        sort(price + 1, price + 1 + n);

        int cnt = 0;
        int l = 1;

        //左右都要移动(可以只有一边移动)可以使用 while 循环
        while(l <= n) {

            //两个纪念品的价值总和 <= 上限
            if(price[l] + price[n] <= w) {

                l++;
                n--;
            } else {

                //超过上限
                n--;
            }
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
