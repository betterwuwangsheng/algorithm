#include <algorithm>
#include <iostream>

using namespace std;

const int MX = 1010;

struct NODE {
    int num;
    int id;
} node[MX];

bool cmp(NODE n1, NODE n2) {
    if (n1.num == n2.num)
        return n1.id < n2.id;
    else
        return n1.num < n2.num;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &node[i].num);
        node[i].id = i + 1;
    }

    sort(node, node + n, cmp);

    for (int i = 0; i < n; ++i)
        printf("%d %d\n", node[i].num, node[i].id);
    return 0;
}