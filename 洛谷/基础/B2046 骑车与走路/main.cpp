#include <iostream>

using namespace std;

int main() {
    int d;
    scanf("%d", &d);

    double t_b = 50 + d * 1.0 / 3.0;
    double t_w = d * 1.0 / 1.2;

    if (t_b < t_w)
        printf("Bike");
    else if (t_b > t_w)
        printf("Walk");
    else
        printf("All");
    return 0;
}