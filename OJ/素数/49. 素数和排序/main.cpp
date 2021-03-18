#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

const ull MAXN = 1e7 + 10;

struct Node {
    int x, y;
    ull sum;
};

//欧拉筛
void check() {  
}

bool cmp(Node x, Node y) {
    //若 f(x,y) 相等，则按 x 从小到大排序。
    if (x.sum == y.sum) {
        if (x.x == y.x)
            //若 f(x,y) 和 x 都相等，则按 y 从大到小排序。
            return x.y > y.y;
        return x.x < y.x;
    }

    // f(x,y) 从小到大排序
    return x.sum < y.sum;
}
int main() {
    check();
    int n;
    scanf("%d", &n);
    Node node[200001];
    for (ull c = 0; c < n; ++c) {
        scanf("%d%d", &node[c].x, &node[c].y);
        for (ull i = node[c].x; i <= node[c].y; ++i)
            //if (isPrime[i])
                node[c].sum += i;
    }

    //排序
    sort(node, node + n, cmp);

    for (ull i = 0; i < n; ++i)
        printf("f(%d,%d)=%llu\n", node[i].x, node[i].y, node[i].sum);
    return 0;
}
