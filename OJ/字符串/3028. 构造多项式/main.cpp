#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)   {
        printf("case #%d:\n", i);
        int num, first = 1;
        for(int j = 8; j >= 0; j--) {
            scanf ("%d", &num);

            //不是第一项且 数字 > 0
            if(!first && num > 0)
                printf("+");
            if(j == 0) {//最后一项
                if(first || num != 0)
                    printf("%d", num);
            } else if(num) {
                if(num == -1)

                    printf("-");
                else if(num != 1)
                    printf("%d", num);
                printf("x");
                if(j != 1)
                    printf("^%d", j);
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}

