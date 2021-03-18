#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。


Input
输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，跟着就是n个整数。n=0表示输入的结束，不做处理。


Output
对于每组输入数据，输出交换后的数列，每组输出占一行。


Sample Input
4 2 1 3 4
5 5 4 3 2 1
0


Sample Output
1 2 3 4
1 4 3 2 5
*/
int main() {
    int n, i;
    int a[101];
    int min_index = 1;
    while(cin >> n) {

        //n = 0表示输入的结束，不做处理。
        if(n == 0)
            break;

        //读入数据
        for(i = 1; i <= n; i ++) {
            cin >> a[i];
        }

        //获得最小值下标
        for(i = 1; i <= n; i++) {

            //当前元素 < 当前最小值下标所在元素
            if(a[i] < a[min_index]) {

                //更新最小值下标
                min_index = i;
            }
        }

        //交换
        swap(a[min_index], a[1]);

        //输出
        for(i = 1; i <= n; i++) {
            if(i != 1)
                printf(" ");
            printf("%d", a[i]);
        }
        printf("\n");
    }
    return 0;
}
