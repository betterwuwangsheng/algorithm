#include <iostream>

using namespace std;

int x, a, y, b;
int main() {
    scanf("%d%d%d%d", &x, &a, &y, &b);
    printf("%.2lf", 1.0 * (a * x - b * y) / (a - b) * 1.0);
    return 0;
}