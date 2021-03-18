#include <bits/stdc++.h>

using namespace std;
const int M = 2e5 + 1;
int a[M];
int N, C;

//查找第一个 >= val 的数的下标
int lowerBound(int val) {
    int ans = -1;
    int l = 0, r = N - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        // >= B 的数
        if(a[mid] >= val) {
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
        if(a[mid] > val) {
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
    //A- B = C
    // A : 1 1 2 3
    // C = 1
    // A= 1 => B = A - C = 0
    // A= 1 => B = A - C = 0
    // A= 2 => B = A - C = 1
    // A= 3 => B = A - C = 2

    //枚举 A，统计数列中有多少个 B 满足 B = A - C
    //二分法统计
    //B 的个数 = 所有 >B 的下标 - >= B 的下标
    scanf("%d%d", &N, &C);

    //读入数据
    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    //排序（二分）
    sort(a, a + N);

    long long cnt = 0;

    //遍历计算
    for(int i = 0; i < N; i++) {
        int A = a[i];
        int B = A - C;

        //二分查找数列中 B 的个数

        //查找第一个 >= B 的数的下标
        //lowerBound(B);
        //查找第一个 > B 的数的下标
        //upperBound(B);
        cnt += upperBound(B) - lowerBound(B);
    }

    cout << cnt << endl;
    return 0;
}
