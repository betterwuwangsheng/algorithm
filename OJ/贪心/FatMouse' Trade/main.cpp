#include <bits/stdc++.h>

/**
问题描述
FatMouse准备了M磅的猫食，并准备与守卫着他最喜欢的食物JavaBean的仓库中的猫进行贸易。
仓库有N个房间。第i个房间包含J [i]磅JavaBeans，并且需要F [i]磅猫食。FatMouse不必在房间内交易所有JavaBean，而是，如果他支付F [i] * a％的猫食，他可能会得到J [i] * a％的JavaBeans。这是一个实数。现在，他正在将这项作业分配给您：告诉他可以获取的最大JavaBeans数量。


输入
输入包含多个测试用例。每个测试用例都从包含两个非负整数M和N的行开始。然后是N行，每行分别包含两个非负整数J [i]和F [i]。最后一个测试用例后跟两个-1。所有整数均不大于1000。


输出
对于每个测试用例，请在一行中打印精确到3个小数位的实数，这是FatMouse可以获取的JavaBean的最大数量。


样本输入
5 3
7 2
4 3
5 2
20 3
25 18
24 15
15 10
-1 -1


样本输出
13.333
31.500

*/
using namespace std;

const int MAXN = 1000;

struct JavaBean {
    double weight;
    double cost;
};

JavaBean j[MAXN];

//比较性价比
bool cmp(JavaBean x, JavaBean y) {
    return x.weight / x.cost > y.weight / y.cost;
}

/**
    购买时选择性价比最高的
    j[i] -> weight
    f[i] -> cost
    性价比 -> weight / cost
*/
int main() {

    //读入总的钱和仓库房间数量
    int m, n;
    while(cin >> m >> n) {

        //结束标志
        if(n == -1 && m == -1)
            break;

        //读入重量和价值
        for(int i = 0; i < n; i++) {
            cin >> j[i].weight >> j[i].cost;
        }

        //性价比排序
        sort(j, j + n, cmp);

        double res = 0;
        for(int i = 0; i < n; i++) {

            //钱 > 价值 -> 全部买下
            if(m >= j[i].cost) {

                //钱减少
                m -= j[i].cost;

                //重量增加
                res += j[i].weight;
            } else {

                //钱不够 -> 买一部分
                //数量 * 重量 = 总重量（咖啡豆）
                res += j[i].weight * (m / j[i].cost);
                break;
            }
        }
        printf("%.3f\n", res);
    }
    return 0;
}
