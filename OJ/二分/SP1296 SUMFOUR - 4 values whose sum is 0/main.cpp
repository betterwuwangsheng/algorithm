#include <bits/stdc++.h>

using namespace std;

/**
题目描述
SUM问题可以表示为：给定四个整数值的列表A，B，C，D，计算属于A x B x C x D的四个四元组（a，b，c，d）使得a + b + c + d = 0。在下面，我们假设所有列表的大小都相同

输入格式
输入文件的第一行包含列表n的大小（此值可以最大为4000）。然后，我们有n行包含四个整数值（绝对值最大为2^{28}
28
  ），分别属于A，B，C和D。

（编辑： n <= 2500）

输出格式
输出应打印在一行上。

题意翻译
给定4个数列A,B,C,D。要从每个数列中取出1个数，使4个数的和为0。求出这样的组合个数。当一个数列中有多个相同的数字时，把他们作为不同的数字看待。

输入：

第一行：n

以下n行，每行4个数，第i行为ai,bi,ci,di。

输出：

组合数个数。

限制：

n <= 4000；

|ai,bi,ci,di|<=2^28

输入输出样例
输入 #1复制
6
-45 22 42 -16
-41 -27 56 30
-36 53 -37 77
-36 30 -75 -46
26 -38 -10 62
-32 -54 -6 45
输出 #1复制
5
*/

const int N = 4000 + 10;
int n;
int len;

//数列
int L[N][5];

//n 行 n 列
int aPb[N * N];
int cPd[N * N];
int p1 = 1;
int p2 = 1;
//查找第一个 >= val 的数的下标
int lowerBound(int val) {
    int ans = -1;
    int l = 0, r = N - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        // >= B 的数
        if(cPd[mid] >= val) {
            ans = mid;

            //向左边继续查找
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

//查找第一个 > val 的数
int upperBound(int val) {
    int ans = -1;
    int l = 0, r = N - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        // >= B 的数
        if(cPd[mid] > val) {
            ans = mid;

            //向左边继续查找
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {

    int n;
    scanf("%d", &n);

    //从 1 开始存储数组更方便
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= 4; j++) {
            scanf("%d", &L[i][j]);
        }
    }

    //求解 A + B
    //求解 C + D
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            aPb[p1++] = L[i][1] + L[i][2];
            cPd[p2++] = L[i][3] + L[i][4];
        }
    }
    len = n * n;
    sort(aPb, aPb + 1 + len);

    long long res = 0;

    //枚举 A + B -> 寻找 -(C + D) -> 二分
    for(int i = 0; i < n; ++i) {
        int x = aPb[i];
        int y = 0 - x;

        //统计 -(A + B) 的个数
        //查询第一个 > 的数字位置 upper_bound
        //查询第一个 >= 的数字位置 lower_bound
        res += upperBound(y) - lowerBound(y);
    }
    printf("%lld", res);
    return 0;
}
