#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

//C非0，所以如果a&b为0，则不行。
//当a&b为0时，我们应该找，最小的a，b有一个为1的位，将c的这位0变成1。
int main() {
    int t;
    cin >> t;
    while(t--) {
        LL a, b;
        cin >> a >> b;

        LL ans = a & b;
        if(ans)
            cout << ans << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
