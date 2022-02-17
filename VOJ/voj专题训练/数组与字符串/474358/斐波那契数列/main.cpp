#include <iostream>

using namespace std;

int k;
int main() {
    scanf("%d", &k);
    int f1 = 1, f2 = 1, t;

    if (k == 1 || k == 2)
        printf("1\n");
    else {
        for (int i = 3; i <= k; ++i) {
            t = f1 + f2;
            f1 = f2;
            f2 = t;
        }
        printf("%d\n", f2);
    }
    return 0;
}