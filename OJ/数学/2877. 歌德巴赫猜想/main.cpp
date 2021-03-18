#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    if(n == 2)
        return true;
    for(int i = 2; i <= (int)sqrt(n); i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main() {

    int n;
    while(cin >> n) {

        for(int i = n >> 1; i >= 1; i--) {

            //n = i + (n - i)
            //判断 i 和 n - i 是否为素数
            if(is_prime(i) && is_prime(n - i)) {

                //遇到符合条件的数直接跳出循环
                printf("%d %d\n", i, n - i);
                break;
            }
        }
    }
    return 0;
}
