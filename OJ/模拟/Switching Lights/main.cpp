#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        double A, B, H;
        cin >> A >> B >> H;
        printf("%.2f\n", B * H / A);
    }
    return 0;
}
