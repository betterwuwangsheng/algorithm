#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

const int N = 1e5 + 10;
int main() {

    // vector -> ��̬����
    //vector() -> ����һ���յ� vector

    /**
        ���¹����Ϊ�ն�̬����
    */
    vector<int> vt1; //һά int ������
    vector<int> vt2[N]; //vt2[0] - vt2[N - 1]
    vector<vector<int> > vt3; //��ά��̬����

    /**
        ���¶��嶯̬���鲢��ֵ
    */
    int n = 5;
    int val = 3;
    vector<int> vt4(n);
    vector<int> vt5(n, val);

    cout << vt4[2] << endl;
    cout << vt5[2] << endl;

    for(int i = 0; i < 5; i++) {
        cout << vt5[i] << ' ';
    }
    printf("\n");

    ///��ö�̬����ĳ���
    int len = (int)vt5.size();
    printf("%d\n",len);

    for(int i = 0; i < (int)vt5.size(); i++) {
        printf("%d ", vt5[i]);
    }

    printf("\n");

    ///ͨ������������
    vector<int>::iterator it;
    cout <<(*vt5.begin());
    printf("\n");

    ///ͨ������������
    for(it = vt5.begin(); it != vt5.end(); it++) {
        cout << (*it) << ' ';
    }
    printf("\n");

    ///ɾ�����һ��Ԫ��
    vt5.pop_back();

    ///��̬���������һ��Ԫ��
    vt5.push_back(1);

    ///����Ԫ�أ�ָ��λ�ã�
    vt5.insert(vt5.begin(),5);
    for(it = vt5.begin(); it != vt5.end(); it++) {
        cout << (*it) << ' ';
    }
    cout << endl;
    ///string �ַ�������
    string str1 = "wws";
    string str2 = "��˧";

    cout << str1 + str2 << endl;
    cout << str1.size();
    return 0;
}
