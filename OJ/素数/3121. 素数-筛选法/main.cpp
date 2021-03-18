#include <bits/stdc++.h>

using namespace std;

/**
素数筛法
     1. 创建 bool 型数组 prime[] 大小为 n + 1 .
        先把所有的下标为奇数的标为 true,
        下标为偶数的标为 false.
     2. for(i = 3; i <= sqrt(n); i += 2 ){
            if(prime[i])
                for(j = i + i; j <= n; j += i )
                    prime[j]=false;
        }
     3. 最后输出 bool 数组中的值为 true 的单元的下标，
        就是所求的 n 以内的素数了

        朴素版本：筛去 2 4 6 8 ...
                   筛去 3 6 9 13....
        终极版本：唯一分解定理 = 算数基本定理
素数: 只有 1 和自身是因数
*/
#include<stdio.h>
#include<math.h>

#define N 200

//是否为素数
//1 -> 素数
//0 -> 合数
bool is_prime[N] ;

int main() {

    //初始化 bool 数组 -> 从 1 开始更好
    for(int i = 2; i <= N; i++) {
        is_prime[i] = true;
    }
    /**
        判断素数
    */
    for(int i = 2; i * i < N; i++) {

        //1 -> 素数
        if(is_prime[i])

            //去除合数 -> 标记为 false -> 合数
            // 7 -> 7 * 7 = 49 -> 49 + 7 = 56
            for(int j = i * i; j < N; j += i)

                //标记为 false -> 素数
                is_prime[j] = false;
    }

    vector<int> vt1;
    vector<int> vt2;
    vector<int> res;
    for(int i = 1; i < 200; i++)
        if(is_prime[i])
            vt1.push_back(i);
    for(int i = 1; i <= 99; i++)
        if(is_prime[i])
            vt2.push_back(i);
    set_difference(vt1.begin(), vt1.end(), vt2.begin(), vt2.end(), inserter(res, res.begin()));

    if(res.size() == 0) {
        printf("NULL \n");
    } else {
        vector<int>::iterator it;
        for(it = res.begin(); it != res.end(); it++) {
            printf("%d ", *it);
        }
    }
    return 0;
}
