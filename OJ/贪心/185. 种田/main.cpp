#include<bits/stdc++.h>

using namespace std;

int main() {
    long long x, y, ans = 0;
    cin >> x >> y;
    while(x && y) { //如果 x, y 中有一个为 0，就结束了
        swap(x, y);
        ans += 4 * y * (x / y);//种完剩下的所有最大的正方形。
        x %= y; //x 剩下 x % y ，x % y < y(可能)，所以需要交换 x ,y
    }
    cout << ans;
    return 0;
}
