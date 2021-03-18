#include <bits/stdc++.h>

using namespace std;

//重复的数字，只保留一个,默认从小到大排序
set<int> st;
int main() {
    int m;
    cin >> m;

    while (m--) {
        int num;
        cin >> num;
        st.insert(num);
    }

    cout << st.size() << endl;
    for (auto& it : st)
        cout << it << " ";

    return 0;
}
