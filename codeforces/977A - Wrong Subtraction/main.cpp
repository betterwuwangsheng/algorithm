#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; ++i) {
        if (n % 10 == 0)  //ĩλΪ 0
            n /= 10;
        else  //ĩλ�� 0
            n -= 1;
    }
    cout << n << endl;
    return 0;
}