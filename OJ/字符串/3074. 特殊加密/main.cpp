#include <bits/stdc++.h>

/*
简单模拟
*/
using namespace std;

void print(int n) {
    string s;
    int m = n;
    if (n > 5)
        n = 10 - n;
    for (int i = 0; i < n; i++)
        s += ".";
    for (int i = n; i < 5; i++)
        s += "-";
    if (m > 5)
        reverse(s.begin(), s.end());
    cout << s;
}

int main() {

    int t;
    cin >> t;
    int count = 0;
    int flag[27];
    int index = 1;
    for (int i = 2; i <= 9; i++) {
        int j = 3;
        if (i == 7 || i == 9)
            j++;
        for (int k = 1; k <= j; k++) {
            flag[index++] = i * 10 + k;
            //cout<<flag[index-1]<<" ";
        }

    }
    while (t--) {
        string s;
        cin >> s;
        printf("case #%d:\n", count++);
        for (int i = 0; i < s.size(); i++) {
            int m = flag[s[i] - 'A' + 1];
            int x = m / 10;
            int y = m % 10;
            print(x);
            cout << "/";
            print(y);
            if (i < s.size() - 1)
                cout << "/";
        }
        cout << endl;
    }
    return 0;
}
