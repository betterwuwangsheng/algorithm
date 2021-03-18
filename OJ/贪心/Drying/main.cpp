#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<map>
#include<algorithm>

//#include <bits/stdc++.h>

using namespace std;

/**
   给出N件带水的衣服，你有两种选择可以把某件衣服给弄干。
   一是用烘干机可以每分钟烤干衣服的K滴水。
   二是每分钟衣服会自然烘干一滴水。
   而用烘干机的时候就不再自然烘干了。
   而每件衣服所带的水滴是不一样多的。
   现在问你最少要多少时间可以把衣服全烘干。
*/

//最小值问题 -> 判定性问题
//判断时间是否可行
//对时间采取二分策略

const int MAXN = 1e5 + 10;
int water[MAXN];

//检查当前所有的衣服在烘干机里经 time 时间能否烘干
bool check(int n, int k, int time) {

    //总时间
    int sum = 0;
    for(int i = 0; i < n; ++i) {

        //含水量 < time -> 自然晾干
        //否则，烘干机烘干
        if(water[i] > time ) {

            //k - 1 -> 自然晾干
            sum += ceil((water[i] - time) * 1.0 / (k - 1));
        }
        if(sum > time)
            return false;
    }
    return true;
}
int main() {

    //衣服数量
    int n;
    scanf("%d", &n);

    //每一件衣服的含水量
    for(int i = 0; i < n; ++i) {
        scanf("%d", &water[i]);
    }

    //每分钟烤干衣服的 K 滴水
    int k;
    scanf("%d", &k);

    //排序
    sort(water, water + n);

    //烘干和自然一样
    if(k == 1) {

        //直接输出最大含水量的衣服
        printf("%d\n", water[n - 1]);
    } else {

        int left = 1;
        int right = water[n - 1];
        while(left <= right) {

            int mid = left + (right - left) / 2;
            if(check(n, k, mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        printf("%d\n", left);
    }
    return 0;
}
