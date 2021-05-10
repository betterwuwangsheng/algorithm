#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    int k = 0;
    while(T--) {
        int num;
        cin >> num;
        int sum = 0;

        for(int i = num - 1; i >= 2; i--) {
            if(num % i == 0) {
                sum = sum + i * i;
            }
        }
        printf("case #%d:\n%d\n", k++, sum);

    }
    return 0;
}
