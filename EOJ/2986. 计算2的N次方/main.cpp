#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);

        unsigned long long a = 1;

        while (m--) {
            a *= 2;
        }
        cout << "case #"<< i <<":" << endl << a << endl;;
    }
    return 0;

}
