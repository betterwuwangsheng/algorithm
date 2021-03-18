#include <bits/stdc++.h>

using namespace std;

/**
夜夜捡到了一个长为 nn 的数组，贪玩的她把数组首尾拼接了起来，并想从任意位置开始遍历数组一周。

输入
第一行给出数组 aa 的大小 nn 。

第二行给出 nn 个数。

第三行给出遍历的起点 bb 。

(1 \le n \le 100,\ 1 \le a_i \le 1000, \ 1 \le b \le n)(1≤n≤100, 1≤a
i
​
 ≤1000, 1≤b≤n)

输出
从起点遍历数组一周的结果。

样例
输入复制
5
2 4 3 1 5
2
输出复制
4 3 1 5 2
*/

int main() {
    int n;
    cin >> n;
    int a[n] {};
    for(int i = 1; i<= n; i++) {
        cin >> a[i];
    }

    int b;
    cin >> b;

    //先遍历后面的
    for(int i = b; i <= n; i++){
        cout << a[i] << " ";
    }

    //遍历前面的
    for(int i = 1; i < b; i++){
        cout << a[i] << " ";
    }
    return 0;
}

