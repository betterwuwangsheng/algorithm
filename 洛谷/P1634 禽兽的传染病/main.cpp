#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int x, n;
    cin >> x >> n;

    ll sum = 1;

    //每轮感染 x 个,总共有感染的熟练是 x * sum + sum
    while (n--)
        sum = sum * x + sum;
    cout << sum << endl;
    return 0;
}