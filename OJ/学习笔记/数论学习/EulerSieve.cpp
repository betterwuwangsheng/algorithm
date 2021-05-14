#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e8;

/**
    30 = 2 * 3 * 5
    在埃氏筛中计算 2 3 5 的倍数时一共被筛选了 3 次，产生不必要的操作

    解决办法:
    枚举已经算出来的质数
    若该质数已经被筛选过，就不必再筛选
*/
bool is_prime[MAXN];
int prime[MAXN];

void EulerSieve(int n) {
    //初始化
    memset(is_prime, true, sizeof(is_prime));
    int cnt_num = 1;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i])  // 是素数
            prime[cnt_num++] = i;
        for (int j = 1; j < cnt_num; ++j) {
            if (i * prime[j] > n)  // 越界
                break;
            is_prime[i * prime[j]] = false;  // 筛去素数的 i 倍
            if (i % prime[j] == 0)  // 之前已经筛选过,不必重复筛选
                break;
        }
    }
}

int main() {
    clock_t start = clock();
    EulerSieve(10000000);

    cout << endl;
    clock_t end = clock();
    cout << end - start << endl;
    return 0;
}