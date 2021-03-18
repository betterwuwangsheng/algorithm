#include <bits/stdc++.h>
#include <set>

using namespace std;

///打印函数
void print(set<int>& s) {
    cout << "{";

    ///空集合
    if (s.size() == 0)
        cout << "}" << endl;
    else {
        set<int>::iterator it = s.begin();
        int i = 0;
        for (; i < s.size() - 1; ++it, ++i)
            cout << *it << ",";
        cout << *it << "}" << endl;
    }
}
int main() {
    int m, n;
    scanf("%d%d", &m, &n);

    set<int> A;
    set<int> B;
    set<int> C;

    while (m--) {
        int num;
        cin >> num;
        A.insert(num);
    }

    while (n--) {
        int num;
        cin >> num;
        B.insert(num);
    }

    set<int>::iterator it;

    ///求交集
    set_intersection(A.begin(), A.end(), B.begin(), B.end(),
                     inserter(C, C.end()));
    print(C);
    C.clear();

    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.end()));
    print(C);
    C.clear();

    set_difference(A.begin(), A.end(), B.begin(), B.end(),
                   inserter(C, C.end()));
    print(C);
    return 0;
}
