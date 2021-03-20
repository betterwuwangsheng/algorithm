#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; ++i)  //∂¡»Î
        cin >> a[i];
    sort(a, a + 3);              //≈≈–Ú
    for (int i = 0; i < 3; ++i)  // ‰≥ˆ
        cout << a[i] << " ";
    return 0;
}
