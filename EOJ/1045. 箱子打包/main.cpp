#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int len[MAXN];

int main() {

    //物品数量
    //箱子长度
    int l, n;
    scanf("%d%d", &n, &l);

    //读入每个物品的长度
    for(int i = 0; i < n; i++) {
        scanf("%d", &len[i]);
    }

    //排序 -> 升序
    sort(len, len + n);

    int res = 0;
    int left = 0;
    int right = n - 1;

    //(1) 每个箱子最多包含两个物品
    //(2) 每个物品要被包含在 q 个箱子中的一个中
    //(3) 在箱子中物品的总长度不能超过 l

    //贪心策略
    //选择最大和最小的商品装箱,若溢出则只装最大的商品
    while(left <= right) {

        //两个物品的总长度不能超过 l
        if(len[left] + len[right] <= l) {

            //移动 -> 双指针移动位置
            left++;
            right--;
        } else {

            //溢出则只装最大的商品
            right--;
        }

        //无论如何箱子都会增加
        res++;
    }
    cout << res << endl;
    return 0;
}
