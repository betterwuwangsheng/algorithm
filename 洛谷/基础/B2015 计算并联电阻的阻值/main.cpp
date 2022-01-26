#include <iostream>

using namespace std;

int main() {
    double r1, r2;
    scanf("%lf %lf", &r1, &r2);
    printf("%.2lf", 1.0 / (1.0 / r1 + 1.0 / r2));
    return 0;
}