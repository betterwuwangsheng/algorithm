#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        if(check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
