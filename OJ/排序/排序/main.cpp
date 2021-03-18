#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <csmath>
#include <cstdio>

using namespace std;

/**
链接：https://www.nowcoder.com/questionTerminal/508f66c6c93d4191ab25151066cb50ef
来源：牛客网

 对输入的n个数进行排序并输出。

输入描述:
    输入的第一行包括一个整数n(1<=n<=100)。
    接下来的一行包括n个整数。


输出描述:
    可能有多组测试数据，对于每组数据，将排序后的n个整数输出，每个数后面都有一个空格。
    每组测试数据的结果占一行。
示例1
输入
4
1 4 3 2
输出
1 2 3 4
*/

//定义数组接收数据
int arr[100];

int main() {

    int n;

    //将接收的数据保存到数组中
    while(scanf("%d", &n) != EOF) {
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        sort(arr, arr + n);

        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
