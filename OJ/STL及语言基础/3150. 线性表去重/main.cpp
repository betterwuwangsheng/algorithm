#include <bits/stdc++.h>

using namespace std;

//set ��Ψһ
//set ����Ĭ������
set<int>S;
int main() {

    //����Ԫ������
    int n;
    cin >> n;

    //����Ԫ��
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;

        //�򼯺��в���Ԫ��
        //Ԫ����ͬ -> ����֮ǰ��
        S.insert(a);
    }

    set<int>::iterator it;
    for(it = S.begin(); it != S.end(); it++) {
        cout << *it << " ";
    }
}
