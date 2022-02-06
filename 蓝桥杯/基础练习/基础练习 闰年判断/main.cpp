#include <iostream>

using namespace std;

int y;
int main() {
    scanf("%d", &y);
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}