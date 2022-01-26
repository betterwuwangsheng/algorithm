#include <iostream>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%.9lf", a * 1.0 / b * 1.0);
    return 0;
}