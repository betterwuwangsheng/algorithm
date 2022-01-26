#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int x;
    char c;
    scanf("%d %c", &x, &c);

    if (x <= 1000) {
        if (c == 'n')
            printf("8");
        else
            printf("13");
    } else {
        x = x - 1000;
        if (c == 'n') {
            printf("%.f", ceil(x * 1.0 / 500.0) * 4 + 8);
        } else {
            printf("%.f", ceil(x * 1.0 / 500.0) * 4 + 5 + 8);
        }
    }
    return 0;
}