#include <bits/stdc++.h>

using namespace std;

//������洢������
//��ʮ��һ
const int MAXN = 1e6 + 10;

int a[MAXN];

//��ʮ��һģ��(�� & ����,���⸴��)
vector<int> add(vector<int>& A, vector<int>& B) {
    //������
    vector<int> ans;

    //��λ(��ʼʱΪ 0)
    int c = 0;

    //����
    for (int i = 0; i < A.size() || i < B.size(); ++i) {
        //�����λ(���Ȳ�һ����ֻ�ӳ���)
        if (i < A.size())
            c += A[i];
        if (i < B.size())
            c += B[i];

        //��ǰλ
        ans.push_back(c % 10);

        //��λ
        c /= 10;
    }

    //���λ���н�λ
    if (c)

        //ѹ�� 1
        ans.push_back(1);

    //���ؽ�� vector ����
    return ans;
}

vector<int> minus() {}
int main() {
    //���� a,b ���ַ�����ʽ
    string a, b;
    cin >> a >> b;  // a = "123456"

    //�洢ÿһλ����
    vector<int> A, B;

    //��������ַ�������ÿһ���ַ�ת��Ϊ int ���͵�����
    //�����δ��� vector ����
    for (int i = a.size() - 1; i >= 0; --i)  // A = [6,5,4,3,2,1]
        A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; --i)
        B.push_back(b[i] - '0');

    //���üӷ�
    vector<int> ans = add(A, B);

    //���(����)
    for (int i = ans.size() - 1; i >= 0; --i)
        printf("%d", ans[i]);
    return 0;
}