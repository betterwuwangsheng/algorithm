#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int x, y, cnt = 0;
        cin >> x >> y;

        for(int i = 0; i < 32; i++) {
            //对应位置数字不同
            if((x % 2) != ( y % 2))
                cnt++;

            //右移
            x >>= 1;
            y >>= 1;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
