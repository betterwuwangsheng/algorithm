#include <iostream>

using namespace std;

int solve(int num) {
    int sum = 0;
    while (num) {
        int temp = num % 10;
        num /= 10;
        sum += temp * temp * temp;
    }
    return sum;
}

int main() {
    for (int i = 100; i < 1000; ++i)
        if (solve(i) == i)
            printf("%d\n", i);
    return 0;
}