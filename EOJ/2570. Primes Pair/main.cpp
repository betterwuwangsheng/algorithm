#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 10;
bool isPrime[MAXN];

void check() {

    isPrime[0] = isPrime[1] = 0;//不是素数

    for(int i = 2; i <= MAXN; ++i)
        isPrime[i] = 1;//初始化全为素数

    for(int i = 2; i <= sqrt(MAXN); ++i) {
        if(isPrime[i]) //是素数
            for(int j = i * i; j <= MAXN; j += i)//素数的平方都不是素数
                isPrime[j] = 0;
    }

}
int main() {

    check();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1, j = n; i <= n; ++i, --j){
            if(isPrime[i] == 1 && isPrime[j] == 1)
                cnt++;
        }
        cout << cnt <<endl;
    }
    return 0;
}
