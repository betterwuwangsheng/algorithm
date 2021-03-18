#include <stdio.h>
#include <stdlib.h>

int main() {
    int t,n,i,cnt=0,j;
    scanf("%d",&t);

    for(i = 0; i < t; i++) {
        scanf("%d",&n);
        cnt = 0;
        for(j = 3; j <= n / 2; j = j + 2)
            if(n % j == 0)
                cnt++;

        //奇数
        if(n % 2 != 0)
            cnt++;
        printf("case #%d:\n",i);
        printf("%d\n",cnt);

    }
    return 0;
}
