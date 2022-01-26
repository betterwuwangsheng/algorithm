#include <iostream>

using namespace std;

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    printf("%.3lf%%", b * 1.0 / a * 1.0 * 100);
    return 0;
}