#include <iostream>

using namespace std;

int n;
int main() {
    while (1) {
        scanf("%d", &n);

        int sum = n;
        while (n > 2) {
            int a = n;
            n /= 3;
            int t = a % 3;
            sum += (n + t) % 3;
        }
        printf("%d\n", sum);
    }

    return 0;
}