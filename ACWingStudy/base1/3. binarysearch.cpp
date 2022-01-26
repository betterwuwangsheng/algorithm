#include <bits/stdc++.h>

using namespace std;

// //区间 [l, r] 被划分为 [l, mid] 和[mid + 1, r] 时使用
// int binary_1(int l, int r) {
//     while (l < r) {
//         int mid = l + r >> 1;

//         // check() 判断 mid 是否满足性质
//         if (check(mid))
//             r = mid;
//         else
//             l = mid + 1;
//     }
// }

// //区间 [l, r] 被划分为 [l, mid - 1] 和[mid, r] 时使用
// int binary_2(int l, int r) {
//     while (l < r) {
//         int mid = l + r + 1 >> 1; //; l = mid -> l + r + 1

//         // check() 判断 mid 是否满足性质,并做相应更新
//         if (check(mid))
//             l = mid;
//         else
//             r = mid - 1;
//     }
// }

//浮点数二分
// int binary_3(int l, int r) {
//     while ((r - l > 1e-6)) {
//         double mid = (l + 2) / 2;

//         if (mid * mid >= num)
//             r = mid;
//         else
//             l = mid;
//     }
// }
const int MAXN = 1e5;

int a[MAXN];

/*
 * 二分，一个需要找到>=x的第一个数
 * 另一个需要找到<=x的最后一个数。
 */
int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    //读入
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //询问
    while (k--) {
        int num;
        scanf("%d", &num);

        //定义左右边界
        int l = 0, r = n - 1;

        //二分
        while (l < r) {
            //中间位置数值
            int mid = l + r >> 1;

            //判断性质
            //中间位置值 >= num -> 区间在右边区间[l,num,mid,r] -> 答案在左边
            if (a[mid] >= num)
                r = mid;
            else  //否则在右边
                l = mid + 1;
        }

        //无解时 二分完后左端值 != num
        if (a[l] != num)
            printf("-1 -1\n");
        else {                 //左端值 = num
            printf("%d ", l);  //输出左侧位置

            //二分右侧区间
            int l = 0, r = n - 1;
            while (l < r) {
                //中间位置 l + r + 1 >> 1
                int mid = l + r + 1 >> 1;
                if (a[mid] <= num)
                    l = mid;
                else
                    r = mid - 1;
            }
            printf("%d\n", l);
        }
    }
    return 0;
}