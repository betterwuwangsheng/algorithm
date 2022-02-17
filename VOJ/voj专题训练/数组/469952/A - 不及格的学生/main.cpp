#include <iostream>

using namespace std;

int t, a, b;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        if (a < 60 && b >= 60 || a >= 60 && b < 60)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}