#include <bits/stdc++.h>

using namespace std;

int n, x, v, p;
int ans = -1;

int main() {
    cin >> n >> x;

    x *= 100;
    for(int i = 1; i <= n; ++i) {
        cin >> v >> p;

        x -= v * p;

        if(x < 0) {

            //不能喝了
            ans = i ;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
