#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

struct Node {
    LL value;
    bitset<64> bit;//构造时，需在<>中表明bitset 的大小(即size)。
};

bool cmp(Node x, Node y) {

    //count()函数 bitset中被设置成 1 的位的个数。
    if (x.bit.count() == y.bit.count()) {
        return (x.value < y.value);
    }
    return (x.bit.count() > y.bit.count());
}

int main() {
    int t;
    cin >> t;
    int caseNum = 0;
    while(t--) {
        LL num;
        cin >> num;

        Node node[num];

        for (int i = 0; i < num; i++) {
            cin >> node[i].value;

            bitset<64> tmp(node[i].value); //赋值
            node[i].bit = tmp;
        }

        //排序
        sort(node, node + num, cmp);
        printf("case #%d:\n", caseNum++);
        for (int i = 0; i < num; i++)
            cout << node[i].value << ((i + 1 == num) ? "\n" : " ");

    }
    return 0;
}
