#include <bits/stdc++.h>

using namespace std;

int main() {
    int h;
    while(cin >> h) {
        if(h == 0) {
            cout<< 1 <<endl;
        } else if(h == 1) {
            cout << 0 << endl;
        } else {
            int temp = h / 2;

            //奇数
            if(h % 2 == 1) {
                cout << 4;
            }
            for(int i = 0; i < temp; i++) {
                cout << 8;
            }
            cout << endl;
        }
    }
    return 0;
}
