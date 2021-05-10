#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    int k = 0;
    while(T--) {
        int C, W;
        cin >> C >> W;

        int cnt = 0;
        int temp = W;

        //暴力 从 10 - 100 -> 两位数
        //        100 - 1000 -> 三位数
        //        1000 - 10000 -> 四位数
        for(int i = pow(10, C - 1); i < pow(10, C); i++) {

            //个位数为 W 且能被 3 整除
            if(i % 10 == W && i % 3 == 0)
                cnt++;
        }
        printf("case #%d:\n%d\n", k++, cnt);
    }
    return 0;
}
