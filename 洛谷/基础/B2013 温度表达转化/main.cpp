#include <iostream>

using namespace std;

int main() {
    double F;
    scanf("%lf", &F);

    printf("%.5lf", 5 * (F - 32) * 1.0 / 9.0);
    return 0;
}