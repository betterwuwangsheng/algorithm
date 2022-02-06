#include <iostream>

using namespace std;

int main() {
    int i;
    int a1, a2, a3, a4;

    for (i = 1000; i < 10000; i++) {
        // 获取每一位熟知
        a1 = i % 10;
        a2 = i / 10 % 10;
        a3 = i / 100 % 10;
        a4 = i / 1000 % 10;
        if (a1 == a4 && a2 == a3)
            printf("%d\n", i);
    }

    return 0;
}