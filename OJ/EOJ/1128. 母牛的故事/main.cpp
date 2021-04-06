#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[55];

    //前五年 1 > 2 > 3 > 4 > 5
    for(int i = 0; i < 5; i++)
        a[i] = i;

    for(int i = 5; i < 55; i++)
        a[i] = a[i - 1] + a[i - 3];

    while(scanf("%d", &n)) {
        if(n == 0)
            break;
        printf("%d\n", a[n]);
    }
    return 0;
}
