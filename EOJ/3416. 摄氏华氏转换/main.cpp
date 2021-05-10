#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    char x = 'f';
    if (a.back() == 'f')
        x = 'c';
    a.pop_back();
    double num = stoi(a);
    cout << fixed << setprecision(2) << (x == 'f' ? (num * 9 / 5) + 32 : (num - 32) * 5 / 9) << x;
}
