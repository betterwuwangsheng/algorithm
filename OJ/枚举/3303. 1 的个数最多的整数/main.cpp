#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ULL;

int main() {
    int t;
    cin >> t;
    ULL a, b;
    for(int i = 1; i <= t; i++) {
        cin >> a >> b;

        //或运算 | 有 1 则 1 ==> 由于末位 + 1 -> 原来为 1还是 1 但是新增加一个 1
        while((a | (a + 1)) <= b) //不断将末位的 0 变为 1，但 a <= b
            a = a | (a + 1);
        printf("Case %d: %llu\n", i, a);
    }
    return 0;
}

