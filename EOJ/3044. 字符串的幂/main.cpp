#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        string s;
        int n;
        cin >> s >> n;

        printf("case #%d:\n", i);
        for(int j = 0; j <n; j++) {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}
