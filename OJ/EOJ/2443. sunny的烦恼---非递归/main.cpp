#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int num;
        cin >> num;

        while(num > 9) {
            int sum = 0;
            while(num != 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }

        //小于 9 直接输出
        printf("%d\n", num);
    }
    return 0;
}
