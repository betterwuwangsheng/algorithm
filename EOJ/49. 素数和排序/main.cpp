#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

const ull MAXN = 1e7 + 10;

struct Node {
    int x, y;
    ull sum;
};

//ŷ��ɸ
void check() {  
}

bool cmp(Node x, Node y) {
    //�� f(x,y) ��ȣ��� x ��С��������
    if (x.sum == y.sum) {
        if (x.x == y.x)
            //�� f(x,y) �� x ����ȣ��� y �Ӵ�С����
            return x.y > y.y;
        return x.x < y.x;
    }

    // f(x,y) ��С��������
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

    //����
    sort(node, node + n, cmp);

    for (ull i = 0; i < n; ++i)
        printf("f(%d,%d)=%llu\n", node[i].x, node[i].y, node[i].sum);
    return 0;
}
