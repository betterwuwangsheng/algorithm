# include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
    bool f;
    int n, i;
    while(a.length() < b.length())
        a += '0';
    while(b.length() < a.length())
        b += '0';
    for(i = 0; i < a.length(); i++) {
        if(a[i] != b[i])
            return a[i] > b[i];
    }
    if(a == b)
        return true;
}
int main() {
    int n,i;
    cin >> n;
    string a[n], res;
    for(i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, cmp);
    for(i = 0; i < n; i++)
        cout << a[i];
    return 0;
}
