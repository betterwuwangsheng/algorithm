#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    //���ڳ���ȥ�� -> ʹ�� set ���ϸ��ӷ���
    set<string> s;
    string a;

    for (int i = 1; i <= N; i++) {
        cin >> a;
        s.insert(a);
    }
    // set Ĭ������
    set<string>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << endl;
    return 0;
}
