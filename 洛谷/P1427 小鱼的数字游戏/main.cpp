#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
int main() {
    //�洢����
    vector<int> ans;
    int num;
    while (cin >> num) {
        if (num == 0)
            break;
        else
            ans.push_back(num);
    }

    //�������
    for (int i = ans.size() - 1; i >= 0; --i)
        cout << ans[i] << " ";
    return 0;
}