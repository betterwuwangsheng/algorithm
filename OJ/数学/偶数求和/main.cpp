#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while(cin >> n >> m) {
        int sum = 0;
        int step = 2;
        int cnt = 0;

        //初始化偶数
        for(int i = 1; i <= n; i++) {
            sum += step;
            step += 2;

            //每个 m 个数字求和
            if(i % m == 0) {

                //数量增加
                cnt++;

                //每行多个输出第一个不输出空格
                if(cnt != 1)
                    printf(" ");

                //输出平均值
                printf("%d", sum / m);

                //和置零
                sum = 0;
            }
        }

        // m 个数
        if(n % m == 0)
            printf("\n");
        else
            //如果最后不足 m 个，则以实际数量求平均值
            printf(" %d\n", sum / (n % m));
    }
    return 0;
}
