#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    set<int> ans;  //Ԫ�ز��ظ�,��Ĭ�ϴ�С�������� --> ���� = n - 1 ��Ϊ Jolly
    for (int i = 0; i < n - 1; ++i)
        ans.insert(abs(a[i] - a[i + 1]));

    if (ans.size() == n - 1)
        cout << "Jolly" << endl;
    else
        cout << "Not jolly" << endl;
    return 0;
}