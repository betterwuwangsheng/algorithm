#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long LL;

int n;
const int MAXN = 5e5 + 10;

struct Node {
    LL n;
    LL cnt;
};
Node num[MAXN];

//计算 1 的数量
int CountOfOne(LL x) {
    int cnt = 0;
    while (x) {
        ++cnt;
        x &= (x - 1);
    }
    return cnt;
}
bool cmp(Node x, Node y) {

    //1 的位数不同 -> 从大到小进行排序
    if( x.cnt != y.cnt)
        return x.cnt > y.cnt;

    //若两个数的二进制表示中 1 的位数相同，则按照数本身值由小到大排序
    return x.n < y.n;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        scanf("%lld", &num[i].n);
        num[i].cnt = CountOfOne(num[i].n);
    }

    //排序
    //make_heap(num,num + n, cmp);
    //sort_heap(num, num + n, cmp);
    sort(num, num + n, cmp);

    for(int i = 0; i < n; ++i) {
        printf("%lld ", num[i].n);
    }
    return 0;
}
