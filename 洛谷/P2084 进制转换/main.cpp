#include <bits/stdc++.h>

using namespace std;

int main() {

    int m;
    string n;
    while(cin >> m >> n) {

        int len = n.size();
        printf("%c*%d^%d", n[0], m, len - 1);

        for(int i = 1; i < len; ++i)
            if(n[i] != '0')
                printf("+%c*%d^%d", n[i], m, len - 1 - i);
        printf("\n");
    }
    return 0;
}
