#include <iostream>

using namespace std;

const int MX = 10010;
int a[MX];

int n;
int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    int c1 = 0, c11 = 0;
    int c2 = 0, c22 = 0;
    int c3 = 0, c33 = 0;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i + 1; ++j) {
            c1++;
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                c11++;
            }
        }
    }
    printf("%d %d", c1, c11);

    return 0;
}