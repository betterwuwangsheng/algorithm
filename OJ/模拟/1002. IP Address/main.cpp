#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    while(N--) {
        string s;
        cin >> s;
        //结果数组存储八位二进制的十进制结果
        int res[4] = {0};
        int i;
        for(i = 0; i < 32; i++) {
            res[i / 8] += (s[i] - '0') * (int)(pow(2.0, (i / 8) * 8 + 7 - i) + 0.5);
        }

        for(i = 0; i < 3; i++) {
            printf("%d.", res[i]);
        }
        printf("%d\n", res[i]);
    }
    return 0;
}
