#include <bits/stdc++.h>

/**
Problem Description
输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。


Input
输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。


Output
对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。


Sample Input
3 3 -4 2
4 0 1 2 -3
0


Sample Output
-4 3 2
-3 2 1 0
*/
using namespace std;

bool cmp(int a, int b) {
    return abs(a) > abs(b);
}
int main() {

    int n;
    int res[110];

    while(cin >> n) {
        if(n == 0)
            break;
        for(int i = 1; i <= n; i++) {
            cin >> res[i];
        }

        sort(res + 1, res + 1 + n, cmp);

        for(int i = 1; i <= n; i++) {
            if(i == 1)
                cout << res[i];
            else
                cout << " " << res[i];
        }
        cout << endl;
    }
    return 0;
}
