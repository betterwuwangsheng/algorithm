#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;

        int ans = 1;
        for(int i = 1; i < num; ++i)
            ans = (ans * i) % 1999;
        cout << ans <<endl;
    }
    return 0;
}
