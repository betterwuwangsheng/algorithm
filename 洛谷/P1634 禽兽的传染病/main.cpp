#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int x, n;
    cin >> x >> n;

    ll sum = 1;

    //ÿ�ָ�Ⱦ x ��,�ܹ��и�Ⱦ�������� x * sum + sum
    while (n--)
        sum = sum * x + sum;
    cout << sum << endl;
    return 0;
}