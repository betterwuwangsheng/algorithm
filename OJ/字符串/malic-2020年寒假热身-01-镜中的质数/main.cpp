#include <bits/stdc++.h>

using namespace std;

//判断是否为素数
bool isPrime(int x) {
    if(x == 1)
        return false;
    for(int i = 2; i <= sqrt(x); ++i) {
        if(x % i == 0)
            return false;
    }
    return true;
}

bool check(int x) {
    queue<int> Q;

    while(x != 0) {
        Q.push(x % 10);
        x /= 10;
    }
    int sum = 0;
    for(int i = Q.size(); i >= 1; --i) {

        sum += Q.front() * pow(10, i - 1);
        Q.pop();
    }

    if(isPrime(sum))
        return true;
    return false;
}
int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; ++i) {
        if(isPrime(i) && check(i))
            cnt++;

    }

    cout << cnt << endl;
    return 0;
}
