#include <iostream>
#include<cstdio>

using namespace std;
/**
Problem Description
统计给定的n个数中，负数、零和正数的个数。


Input
输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个实数；如果n=0，则表示输入结束，该行不做处理。


Output
对于每组输入数据，输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。


Sample Input
6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0


Sample Output
1 2 3
0 0 5
*/
int main() {


    int n,cnt1,cnt2,cnt3;
    double num;

    while(scanf("%d", &n) != EOF) {

        //边界条件 n == 0
        if(n == 0)
            break;

        //每一次读取新一组的数据就将计数器清零
        cnt1 = 0;
        cnt2 = 0;
        cnt3 = 0;

        for(int i = 0; i < n; i++) {
            scanf("%lf",&num);

            if(num < 0)
                cnt1++;
            else if(num == 0)
                cnt2++;
            else
                cnt3++;
        }
        printf("%d %d %d\n",cnt1,cnt2,cnt3);
    }
    return 0;
}
