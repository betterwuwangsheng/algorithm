#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int cnt = 0;
        while(n--) {
            int a;
            cin >> a;
            if(a <= 10) {
                cnt++;
            }
        }
        cout << cnt << endl;;
    }
    return 0;
}
