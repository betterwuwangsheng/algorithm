#include<stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    int i;
    for(i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        int n, cnt = 0;
        for(n = 1; n <= N / 2; n++) {
            int sum = 0, t = n;
            while(sum < N) {
                sum = sum + t;
                t++;
            }
            if(sum == N)
                cnt++;
        }
        printf("case #%d:\n%d\n", i, cnt);
    }
}
