#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

/**
Problem Description
给定三条边，请你判断一下能不能组成一个三角形。


Input
输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A,B,C。其中A,B,C <1000;


Output
对于每个测试实例，如果三条边长A,B,C能组成三角形的话，输出YES，否则NO。


Sample Input
2
1 2 3
2 2 2


Sample Output
NO
YES
*/
//任意两边之和大于第三边
int main()
{
    int m;
    scanf("%d",&m);

    while(m--){
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);
        if(a + b > c && c + a > b && b + c > a)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
