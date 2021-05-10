#include <bits/stdc++.h>

using namespace std;

// string转化为vector<int>，倒序存储
vector<int> s2i(string &s) {
    vector<int> x;
    int idx = 0, n = s.size();
    for (; idx < n; ++idx) {
        if (s[idx] != '0') break;
    }
    if (idx == n) idx = n - 1;
    for (int i = n - 1; i >= idx; --i) {
        x.push_back(s[i] - '0');
    }
    return x;
}

// a进制下x%b，x倒序存储
int mod(vector<int> &x, int a, int b) {
    int n = x.size(), q = 0;
    for (int i = n - 1; i >= 0; --i) {
        q = (q * a + x[i]) % b;
    }
    return q;
}

// a进制下x/b，x倒序存储
void div(vector<int> &x, int a, int b) {
    int n = x.size(), q = 0;
    for (int i = n - 1; i >= 0; --i) {
        x[i] += q * a;
        q = x[i] % b;
        x[i] /= b;
    }
    for (int i = n - 1; i > 0; --i) {
        if (x[i]) break;
        x.pop_back();
    }
}

// a进制下s转化为b进制string
string convert(string s, int a, int b) {
    vector<int> x = s2i(s);
    int n = x.size();
    vector<int> y;
    while (n > 0) {
        y.push_back(mod(x, a, b));
        div(x, a, b);
        n = x.size();
        if (n == 1 && !x[0]) break;
    }
    int m = y.size();
    string res = "";
    for (int i = m - 1; i >= 0; --i) {
        res += '0' + y[i];
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    string x;
    for (int t = 0; t < T; ++t) {
        cin >> x;
        string x2 = convert(x, 10, 2);
        reverse(x2.begin(), x2.end());
        string res = convert(x2, 2, 10);
        cout << "case #" << t << ":" << endl;
        cout << res << endl;
    }
    return 0;
}
