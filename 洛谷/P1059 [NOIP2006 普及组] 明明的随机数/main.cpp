#include <bits/stdc++.h>

using namespace std;

//�ظ������֣�ֻ����һ��,Ĭ�ϴ�С��������
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
