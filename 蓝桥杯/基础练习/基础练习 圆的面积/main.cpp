#include <cmath>
#include <iostream>

using namespace std;

int r;
int main() {
    scanf("%d", &r);

    // PI=atan(1.0)*4
    printf("%.7lf\n", atan(1.0) * 4 * r * r);
    return 0;
}