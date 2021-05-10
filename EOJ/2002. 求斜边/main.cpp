#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    double f;
    while(scanf("%d %d", &a, &b) != EOF){

        ///先计算然后输出,可以减少运行时间
        f = sqrt(a * a + b * b);
        printf("%.3f\n", f);
    }
    return 0;
}
