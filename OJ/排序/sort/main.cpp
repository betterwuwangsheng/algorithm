#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

/**
Problem Description
给你n个整数，请按从大到小的顺序输出其中前m大的数。


Input
每组测试数据有两行，第一行有两个数n,m(0<n,m<1000000)，第二行包含n个各不相同，且都处于区间[-500000,500000]的整数。


Output
对每组测试数据按从大到小的顺序输出前m大的数。


Sample Input
5 3
3 -35 92 213 -644


Sample Output
213 92 3
*/
/**
利用数组对输入数据进行排序
通过计数排序减少时间(需要构造辅助的计数数组)
*/
//线性排序 => 在一定范围内构造辅助数组对每一个元素进行计数

const int MAXN = 1e6 + 10; //(0<n,m<1000000)
const int RANGE = 5e5; //辅助数组下标[-500000,500000]的整数。 通过平移变为 [0,1000000]

//获取输入
int num[MAXN];

//计数数组 -> 计数数组必须要 > 待排序数组的大小
int cnt[MAXN]; //-500000 ~ 500000

int main() {
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF) {

        memset(cnt,0,sizeof(cnt)); //将计数数组清零

        for(int i = 0; i < n; i++) {
            //获取输入
            scanf("%d", &num[i]);

            //计数数组平移并进行计数
            cnt[num[i] + RANGE]++;
        }

        int index = 0;

        //将结果数组保存到题中未排序的数组中
        for(int i = 0; i < MAXN; i++) {

                //原数组中下标依次增加并存入该整数直到 cnt[i] 的值为 0
            while(cnt[i]--) {
                num[index++] = i - RANGE;  //该整数 -> 由于进行过平移，所以要减去 RANGE
            }
        }

        //输出前 m 个数据
        for(int i = n - 1; i >= n - m; --i) {
            if(i == n - m) {
                printf("%d\n", num[i]);
            } else {
                printf("%d ",num[i]);
            }
        }
    }
    return 0;
}
