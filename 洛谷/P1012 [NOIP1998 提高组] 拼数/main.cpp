#include <bits/stdc++.h>

using namespace std;

const int MAXN = 25;
string a[MAXN];

//比较大小 +
bool cmp(string& a, string& b) {
    return (a + b > b + a);
}
int main() {
    int n;
    cin >> n;

    //读入
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    //排序
    sort(a, a + n, cmp);

    //输出
    for (int i = 0; i < n; ++i)
        cout << a[i];
    return 0;
}