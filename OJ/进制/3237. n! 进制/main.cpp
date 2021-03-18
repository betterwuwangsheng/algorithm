#include <stdio.h>
#include <stdlib.h>

int fac(int t) {
    if(t == 0 || t == 1) {
        return 1;
    } else
        return t * fac(t - 1);
}

int main() {

    //读入问题数
    int T,n;
    scanf("%d",&T);

    int i,j,cnt;
    for(cnt = 0; cnt < T; cnt++) {
        int flag = 0;

        //读入十进制
        scanf("%d", &n);
        printf("case #%d:\n", cnt);

        if(n == 0)
            printf("0\n");
        else {
            //反序输出
            for(i = 9; i >= 0; i--) {

                int temp = n / (fac(i + 1));
                if(temp != 0) {
                    n = n - temp * (fac(i + 1));
                    printf("%d", temp);
                    flag = 1;
                } else { //商为零
                    if(flag) {
                        printf("%d", temp);
                    }
                }
            }
            printf("\n");
        }
    }
}
