#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    while(cin >> a >>b) {
        for(int i = 0; i < a.length(); ++i) {
            a[i] = tolower(a[i]);
            b[i] = tolower(b[i]);
        }
        cout << (a > b ? 1 : a < b ? -1 : 0) << endl;
    }
    return 0;
}
