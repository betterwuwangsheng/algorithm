#include <stdio.h>
int main() {

    char c;
    int a[200]= {0};

    int sum = 0;
    while(scanf("%c",&c) == 1) {
        if(c==' ')
            continue;
        a[c]++;
        sum++;
    }
    int max=0;
    char maxc='a';
    for(int i = 97; i < 180; i++) {
        if(a[i] > max) {
            max = a[i];
            maxc = i;
        }
    }
    printf("%c %.2f",maxc,max*1.0/(sum-1));
}
