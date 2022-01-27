#include <bits/stdc++.h>

using namespace std;

int N, T;
double sum = 0;
struct gold {
    int m;
    int v;
} g[110];

//根据重量价值比（也就是单位价格）降序排列
bool cmp(gold a, gold b) {
    //return a.v / a.m > b.v / b.m;
    //由于除法存在存在整除问题 -> 通分
    return (a.v * b.m) > (a.m * b.v);
}
int main() {
    cin >> N >> T;
    for(int i = 1; i <= N; i++) {
        cin >> g[i].m >> g[i].v;
    }

    sort(g + 1, g + 1 + N, cmp);

    //装金币
    for(int i = 1; i <= N; i++) {

        //不超重
        if(T >= g[i].m) {

            //总价值增加
            sum += g[i].v;

            //背包可容纳重量减少
            T -= g[i].m;

        } else {//超重 -> 重量乘以价值
            sum += 1.0 * T * g[i].v / g[i].m;
            T = 0;
            break; //结束循环
        }
    }

    printf("%.2lf\n", sum);
    return 0;
}
