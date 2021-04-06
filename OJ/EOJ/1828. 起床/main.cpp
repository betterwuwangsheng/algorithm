#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if(n == -1)
            break;
        int H = 0, M = 0, S = 0;
        H = n / 3600;
        M = (n - H * 3600) / 60;
        S = n % 60;

        printf("%02d:%02d:%02d\n", H, M, S);
    }
    return 0;
}
