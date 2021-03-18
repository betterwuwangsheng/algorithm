#include <bits/stdc++.h>

using namespace std;

/**
前缀和：
    前缀和是一个数组的某项下标之前(包括此项元素)的所有数组元素的和。

    设prefixSum[]为前缀和数组，a[]为原数组，根据这句话可以得到前缀和的定义式和递推式：

    一维前缀和: prefixSum[i] = prefixSum[i - 1] + a[i]
    二维前缀和: prefixSum[x][y] = prefixSum[x-1][y] + prefixSum[x][y - 1] - prefixSum[x - 1][y - 1] + a[x][y]


    容易得到 prefixSum[i] = prefixSum[i-1] + a[i] 　
    这样就可以得到前 i 个数(包括自己)的和
*/

const int MAX_N = 1e5 + 5;

int a[MAX_N];
int prefixSum[MAX_N];

int main() {

    //问题数
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        //获取输入
        scanf("%d", &a[i]);

        //求前缀和
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    int t;
    scanf("%d", &t);
    while (t--) {
        int left, right;
        int sum = 0;
        scanf("%d %d", &left, &right);

        //求解某区间内的前缀和
        sum = prefixSum[right] - prefixSum[left - 1];
        printf("%d\n", sum);
    }
    return 0;
}
