#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
string s[MAXN];

//�Ƚϴ�С
bool cmp(string& a, string& b) {
    return a < b;
}
int main() {
    int n;
    cin >> n;

    //��������
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    string t;
    cin >> t;

    //����
    sort(s, s + n, cmp);

    for (int i = 0; i < n; ++i) {
        if (s[i].find(t) == 0)  //���� t ���ַ������ֵ�λ��(λ��Ϊ 0)
            cout << s[i] << endl;
    }
    return 0;
}