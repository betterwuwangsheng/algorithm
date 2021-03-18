#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
int num[MAXN];

int main() {
    int n, start, step;
    while(cin >> n >> start >> step) {
        for(int i = 1; i <= n; ++i)
            num[i] = i;

        int index = 0;
        for(int i = 1; i <= n; i++) {
            index = (index + 3) % i;
            cout << num[index + 1] << " ";
        }
    }
    return 0;
}
