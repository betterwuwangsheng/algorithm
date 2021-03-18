#include <bits/stdc++.h>

using namespace std;

const int MAXN = 9e5 + 10;
struct Node {
    string email;
    string username;
    string host;
};

Node e[MAXN];

bool cmp(Node x, Node y) {

    //域名相同
    if(x.host == y.host)
        return x.username > y.username;

    return x.host < y.host;
}
int main() {
    int n;
    scanf("%d", &n);

    string s;
    for(int i = 0; i < n; ++i) {
        cin >> s;
        e[i].email = s;

        int len = s.length();

        e[i].username = s.substr(0, s.find("@"));
        e[i].host = s.substr(s.find("@") + 1);
    }

    //排序
    sort(e, e + n, cmp);

    for(int i = 0; i < n; ++i) {
        cout << e[i].email << endl;
    }
    return 0;
}
