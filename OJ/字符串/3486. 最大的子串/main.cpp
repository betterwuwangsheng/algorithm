#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {

    ///���� vector
    vector<string> vt;

    //�����ַ���
    string str;
    cin >> str;

    ///ȡ��ǰ�� 0
    ///���ַ����������������ָ�����κ��ַ�����ƥ������һ���ַ���
    str.erase(str.find_last_not_of("0") + 1);

    ///�ַ�������
    int len = str.length();

    ///�ַ�������Ϊ 0
    if(len == 0)
        cout<< "0" <<endl;
    else {
        for(int i = len - 1; i >= 0; i--)

            ///����vector
            vt.push_back(str.substr(i,len));

        ///����
        sort(vt.begin(), vt.end());
        cout << vt[len - 1] << endl;
    }

    return 0;
}
