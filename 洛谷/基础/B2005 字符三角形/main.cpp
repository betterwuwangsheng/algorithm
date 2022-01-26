#include <iostream>

using namespace std;

int main() {
    char c;
    scanf("%c", &c);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (j < 5 / 2 - i || j > 5 / 2 + i)
                printf(" ");
            else
                printf("%c", c);
        }
        puts("");
    }
    return 0;
}