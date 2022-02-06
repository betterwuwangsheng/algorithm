#include <iostream>

using namespace std;

const int MX = 1e4 + 10;

int main() {
    int n;
    scanf("%d", &n);

    int num, temp = -1, flag = 1;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);

        if (num > temp)
            temp = num;
    }
    printf("%d", cnt);
    return 0;
}