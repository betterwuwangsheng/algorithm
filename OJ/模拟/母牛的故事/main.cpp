#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？


Input
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。


Output
对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。


Sample Input
2
4
5
0


Sample Output
2
4
6

第 n年：	1	2	3	4	5	6	7	8
f[n] 头牛:	1   2	3	4	6	9  13	19

    f[n] = f[n-1] + f[n-3]

    1.母牛数量在前三年不变，但第四年开始，其数量可知为去年母牛数量加上三年前小牛数量；
    2.小牛数量在前三年每年增加一，
        第四年开始，其数量为去年小牛数量加上去年母牛数量再减去三年前母牛数量；
*/
int num_of_cows(int n) {

    //不超过四年
    if(n <= 4)
        return n;
    else
        return num_of_cows(n - 1) + num_of_cows(n - 3);
    }
int main() {
    int n;
    while(cin >> n) {
        if(n == 0)
            break;
        cout << num_of_cows(n) << endl;;
    }
    return 0;
}
