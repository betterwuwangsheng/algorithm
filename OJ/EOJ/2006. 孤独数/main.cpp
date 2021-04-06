#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;
int a[MAXN];

int check(int n) {
    int sum = n;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {

    memset(a, 0, sizeof(a));

    for(int i = 1; i <= 1000000; i++) {

        //标记为非孤独数
        a[check(i)] = 1;
    }
    for(int i = 1; i <= 1000000; i++)
        if(!a[i])
            printf("%d\n",i);
    return 0;
}
