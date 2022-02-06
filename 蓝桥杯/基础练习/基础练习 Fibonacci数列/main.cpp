#include <iostream>

using namespace std;

typedef long long LL;

int n;
int main() {
    scanf("%d", &n);
    int f1 = 1, f2 = 1;
    int res = 0;
    if (n == 1 || n == 2) {
        printf("1\n");
    } else {
        for (int i = 3; i <= n; ++i) {
            res = ((f1 % 10007) + (f2 % 10007)) % 10007;
            f1 = f2;
            f2 = res;
        }
        printf("%d\n", res);
    }
    return 0;
}