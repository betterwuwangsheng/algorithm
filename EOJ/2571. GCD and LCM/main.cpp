#include <bits/stdc++.h>
using namespace std;

//最大公约数 (辗转相除)
int gcd(int a,int b) {
    return b == 0?a:gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;

}

int main() {
    int N;
    cin >> N;
    while(N--) {
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
    return 0;
}
