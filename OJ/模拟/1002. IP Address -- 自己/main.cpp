#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, i;
    cin >> N;

    while(N--) {
        string s;
        cin >> s;

        int res[4] = {0};

        for(i = 0; i < 8; i++) {
            res[i / 8] += (s[i] - '0') * pow(2.0, 7 - i);
        }
        for(i = 8; i < 16; i++) {
            res[i / 8] += (s[i] - '0') * pow(2.0, 15 - i);
        }
        for(i = 16; i < 24; i++) {
            res[i / 8] += (s[i] - '0') * pow(2.0, 23 - i);
        }

        for(i = 24; i < 32; i++) {
            res[i / 8] += (s[i] - '0') * pow(2.0, 31 - i);
        }

        for(i = 0; i < 3; i++) {
            printf("%d.", res[i]);
        }
        printf("%d\n", res[i]);
    }
    return 0;
}
