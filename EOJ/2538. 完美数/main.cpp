#include <bits/stdc++.h>

using namespace std;

int main() {
    for(int i = 1; i <= 4000; i++) {
        int sum = 0;
        for(int j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            printf("%d its factors are ", i);
            for(int k = 1; k < i; k++) {
                if(i % k == 0) {
                    printf("%d ", k);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
