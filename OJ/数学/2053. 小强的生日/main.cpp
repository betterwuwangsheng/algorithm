#include <iostream>

using namespace std;

/**
（1）：p、q互质,记其最小公倍数为q * p,蛋糕总大小记为 1.
    不妨设p > q,则最大的蛋糕不能达到1/q,否则来p个人就得再切,所以最大的蛋糕为1/p
    最大的蛋糕每份（1/p）,为了使得数量最少,最多可切出p-1份；
    剩余1/p,再切成每份1/pq的大小,有q份；
    这样,不论来的是p人,还是q人,都可以平分.
    所以至少需要p+q-1.
    不论p、q大小,不影响p+q-1的结果.
*/
int main() {
    int P, Q;

    while( cin >> P >> Q)
        cout << P + Q - 1 << endl;
    return 0;
}
