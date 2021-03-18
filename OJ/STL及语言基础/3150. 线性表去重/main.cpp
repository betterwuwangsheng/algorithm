#include <bits/stdc++.h>

using namespace std;

//set 键唯一
//set 集合默认升序
set<int>S;
int main() {

    //读入元素数量
    int n;
    cin >> n;

    //读入元素
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;

        //向集合中插入元素
        //元素相同 -> 覆盖之前的
        S.insert(a);
    }

    set<int>::iterator it;
    for(it = S.begin(); it != S.end(); it++) {
        cout << *it << " ";
    }
}
