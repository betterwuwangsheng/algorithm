#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    int val[6] = {100, 50, 20, 10, 5, 1};
    int res[6] = {0};
    int cnt = 0;
    while(T--) {
        int money;
        cin >> money;

        for(int i = 0; i < 6; i++) {
            res[i] = money / val[i];
            money -= res[i] * val[i];
        }
        cout << "case #" << cnt++ << ":" << endl;

        for(int i = 0; i < 6; i++) {
            if(i == 5)
                cout << res[i] <<endl;
            else {
                cout << res[i] << " ";
            }
        }
    }
    return 0;
}
