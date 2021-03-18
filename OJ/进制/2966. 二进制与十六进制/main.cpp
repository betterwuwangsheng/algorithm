#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    stack<int> b;
    stack<int> h;
    for(int cnt = 0; cnt < T; cnt++) {
        int num;
        scanf("%d", &num);
        if(num == 0) {
            b.push(0);
            h.push(0);
        }
        int x = num;
        while(num) {
            int res = num % 2;
            b.push(res);
            num /= 2;
        }
        printf("case #%d:\n", cnt);
        while(!b.empty()) {
            printf("%d", b.top());
            b.pop();
        }

        printf(" ");

        while(x) {
            int res = x % 16;
            h.push(res);
            x /= 16;
        }
        while(!h.empty()) {
            printf("%X", h.top());
            h.pop();
        }
        printf("\n");
    }

    return 0;
}
