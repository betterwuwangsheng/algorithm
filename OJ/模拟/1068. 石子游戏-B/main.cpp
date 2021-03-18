#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        int ans = 0;
        while(n--) {
            int num;
            cin >> num;

            ans ^= (num % (m + 1));
        }
        if(ans)
            printf("Win\n");
        else
            printf("Lost\n");
    }
    return 0;
}
