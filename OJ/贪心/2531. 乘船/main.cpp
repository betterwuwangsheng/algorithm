#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2010;

//实验室每个人的重量
int weight[MAXN];

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {

        // n 表示实验室总人数
        // k(1 <= k <= 1000) 表示每艘船的最大载重量
        int n, k;
        scanf("%d%d", &n, &k);

        for(int i = 0; i < n; ++i) {
            scanf("%d", &weight[i]);
        }

        //排序 -> 升序
        sort(weight, weight + n);

        int left = 0;
        int right = n - 1;
        int cnt = 0;

        while(left <= right) {

            //连个人的重量没有超过船的载重量
            if(weight[left] + weight[right] <= k) {

                //移动左右
                left++;
                right--;
            } else {

                //一个人就超重 -> 大的左移
                right--;
            }

            //无论如何数量增加
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
