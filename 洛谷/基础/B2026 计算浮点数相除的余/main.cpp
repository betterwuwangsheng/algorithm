#include <iostream>

using namespace std;

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%lf", a - b * (int)(a / b));
    return 0;
}