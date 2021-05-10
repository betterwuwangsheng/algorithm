#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k = 0;
    cin >> n;

    //Ä£Äâ
    for (double Sn = 0; Sn <= n; ++k, Sn += 1.0 / k)
        ;
    cout << k;
    return 0;
}