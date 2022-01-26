#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && c + b > a)
        printf("1");
    else
        printf("0");
    return 0;
}