#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    ll a, b;

    while (t--)
    {
        cin >> a >> b;
        if (__gcd(a, b) > 1)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
    }
    return 0;
}