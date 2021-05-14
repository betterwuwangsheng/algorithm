#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e8;

//标记是否为素数: true -> 素数
bool is_prime[MAXN];

void Elbowsieve(int n) {
    //默认全为素数
    for (int i = 2; i <= n; ++i)
        is_prime[i] = 1;
    //遍历
    for (int i = 2; i * i <= n; ++i) {
        //是素数
        if (is_prime[i])
            //素数的 2 被都不是素数
            for (int j = 2 * i; j <= n; j += i)
                //不是素数
                is_prime[j] = 0;
    }
}
int main() {
    clock_t start = clock();
    Elbowsieve(10000000);
    clock_t end = clock();
    cout << endl;
    cout << end - start << endl;
    return 0;
}