#include <bits/stdc++.h>

using namespace std;

int main() {
    int e, f, c;
    while(cin >> e >> f >> c) {
        int res = 0;
        //当空瓶数量还能换 soda 时
        e += f;
        while(e >= c) {


            //可以换的 soda
            int temp = e / c;

            //喝的 soda 数量增加
            res += temp;

            //空瓶数量增加
            e -= (c - 1) * temp;
        }
        cout << res << endl;
    }
    return 0;
}
