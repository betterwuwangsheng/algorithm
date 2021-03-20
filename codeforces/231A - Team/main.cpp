#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0, a, b, c, n;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        //至少有两个人确定解决方案 -> 解决一个问题
        if (a + b + c >= 2)
            ans++;  //数量增加
    }
    printf("%d\n", ans);
}
