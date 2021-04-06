#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n){
    if(n == 1)
        return false;
    for(int i = 2; i <= (int)sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int N, M;
    while(cin >> N >> M) {
        int cnt = 0;
        for(int i = N; i <= M; i++) {
            if(is_prime(i)) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
