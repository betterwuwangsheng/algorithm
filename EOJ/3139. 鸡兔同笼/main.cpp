#include <bits/stdc++.h>

using namespace std;

int main() {

    //问题数
    int a;
    cin >> a;
    while(a--) {
        int n, m;
        cin >> n >> m;
        int flag = 0;
        int x, y;
        int xx, yy;

        for(x = 0; x <= n; x++) {
            for(y = 0; y <= n; y++) {
                if((x + y) == n && (2 * x + 4 * y) == m) {
                    flag = 1;
                    xx = x;
                    yy = y;
                }
            }
        }

        if(flag == 1) {
            cout << xx << " " << yy << endl;
        } else {
            cout << "No answer" << endl;
        }
    }
    return 0;
}
