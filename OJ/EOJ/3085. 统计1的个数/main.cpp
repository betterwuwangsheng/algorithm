#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    scanf("%d", &num);

    int cnt = 0;
    while(num > 0) {
        int a = num % 2;
        if(a == 1) {
            cnt++;
        }
        num = num / 2;
    }
    printf("%d\n", cnt);
    return 0;
}
