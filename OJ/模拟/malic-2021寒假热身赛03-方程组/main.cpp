#include <bits/stdc++.h>

using namespace std;

int n;
int a, b, c;
int main() {
    cin >> n;
    while(n--) {
        cin >> a >> b >>c;
        for(int x = 0; x < 10000; ++x) {
            for(int y = 0; y < 10000; ++y) {
                for(int z = 0; z < 10000; ++z) {
                    if(x + y + z == a && x * y * z == b && x * x + y * y + z * z == c) {
                        cout << x << y << z << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
