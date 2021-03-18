#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
Xuejiejie is a beautiful and charming sharpshooter.

She often carries n guns, and every gun has an attack power a[i].

One day, Xuejiejie goes outside and comes across m monsters, and every monster has a defensive power b[j].

Xuejiejie can use the gun i to kill the monster j, which satisfies b[j]≤a[i], and then she will get a[i]−b[j] bonus .

Remember that every gun can be used to kill at most one monster, and obviously every monster can be killed at most once.

Xuejiejie wants to gain most of the bonus. It's no need for her to kill all monsters.


Input
In the first line there is an integer T, indicates the number of test cases.

In each case:

The first line contains two integers n, m.

The second line contains n integers, which means every gun's attack power.

The third line contains m integers, which mean every monster's defensive power.

1≤n,m≤100000, −109≤a[i],b[j]≤109。


Output
For each test case, output one integer which means the maximum of the bonus Xuejiejie could gain.


Sample Input
1
2 2
2 3
2 2


Sample Output
1

　　给n把枪，m个怪兽，每把枪可消灭1怪兽，并获得能量=枪的攻击力-怪兽的防御力。
    求如何射杀能获得最多能量？（不必杀光）
*/
const int MAXN = 1e5 + 10;

//枪的攻击力
long long atkpower[MAXN];

//怪物的防御力
long long dfspower[MAXN];

int main() {

    //问题数
    int T;
    scanf("%d", &T);
    while(T--) {

        //枪和怪物数量
        int n, m;
        scanf("%d%d", &n, &m);

        //读入数据
        for(int i = 0; i < n; i++) {
            scanf("%lld", &atkpower[i]);
        }
        for(int i = 0; i < m; i++) {
            scanf("%lld", &dfspower[i]);
        }

        //排序
        //枪的威力从大到小
        sort(atkpower, atkpower + n, greater<long long>() );

        //怪物的防御力从小到大
        sort(dfspower, dfspower + m);

        long long res = 0;

        //打怪赢奖励
        //怪可以不打完
        for(int i = 0; i < n; i++) {

            //有枪无怪
            //威力最大的枪比怪物的防御力还小
            if(i >= m || atkpower[i] < dfspower[i])
                break;
            res += (atkpower[i] - dfspower[i]);
        }
        printf("%lld\n", res);
    }
    return 0;
}
