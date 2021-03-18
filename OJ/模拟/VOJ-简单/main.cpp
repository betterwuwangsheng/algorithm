#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    int m = INT_MIN;
    while(getline(cin, s)) {
        int len = s.size();

        m = max(len, m);
    }
    cout << m << endl;
    return 0;
}
