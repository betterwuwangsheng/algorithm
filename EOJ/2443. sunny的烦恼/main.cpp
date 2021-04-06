#include <bits/stdc++.h>

using namespace std;

int f(int n){
    if(n < 10)
        return n;
    return f(f(n % 10) + f(n / 10));
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        cout << f(num) << endl;
    }
    return 0;
}
