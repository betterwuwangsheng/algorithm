#include <bits/stdc++.h>

using namespace std;

/**
    两个数相乘结果末尾有 0，一定是因为两个数中有因子 2 和 5
    问题转化为：n! 最多可以分解出多少个因子 2 和 5
    因为每个偶数都能分解出因子 2，因子 2 肯定比因子 5 多得多。
    而 5 的倍数才能分解出因子 5
    分解每一个数，出现5的次数必出现2的次数要少很多
    通过统计有多少个 5 即可判断尾数有多少个 0.先上代码在将原理
*/

//寻找因子 5 的数量 -> 进而判断 0 的数量
int trailingZeroes(int n) {
    int cnt = 0;

    //当 n大于 0 时 不断分解
    while (n > 0) {
        cnt += n / 5;
        n /= 5;
    }
    return cnt;
}
int main() {
    int T;
    cin >> T;
    int cnt = 0;
    while(T--) {

        int num;
        cin >> num;
        printf("case #%d:\n%d\n", cnt++, trailingZeroes(num));
    }
    return 0;
}
