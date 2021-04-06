#include <bits/stdc++.h>

using namespace std;

char a[100][100];
int main() {
    int n;
    while(cin >> n) {
        int len =  2 * n + 1;
        int mid = len / 2;
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < len; j++) {

                if(i <= mid) {
                    //上半部分
                    //j <= mid - i <= mid + i
                    if(j >= (mid - i) && j <= (mid + i))
                        printf("*");
                    else
                        printf(" ");
                } else {
                    //下半部分 len - i
                    if(j >= (mid - (len - 1 - i)) && j <= (mid + (len - 1 - i)))
                        printf("*");
                    else
                        printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
