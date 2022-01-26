#include <iostream>

using namespace std;

int main() {
    int num, cnt = 0;
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &num);
        if (num < 60)
            cnt++;
    }
    if (cnt == 1)
        printf("1");
    else
        printf("0");
    return 0;
}