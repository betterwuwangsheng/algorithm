#include <bits/stdc++.h>

using namespace std;

/**
��Ŀ����
�߾��ȼӷ����൱��a+b problem�����ÿ��Ǹ���.

�����ʽ
���������롣a,b \leq 10^{500}a,b��10
500


�����ʽ
���ֻ��һ�У�����a+ba+b��ֵ

�����������
���� #1����
1
1
��� #1����
2
���� #2����
1001
9099
��� #2����
10100
*/
const int MX = 1e5;
string x, y;
int a[MX], b[MX], c[MX];
int la, lb, lc;
int main() {
    //    int a, b;
    //    cin >> a >> b;
    //    cout << a + b << endl;

    //    unsigned long long a, b;
    //    cin >> a >> b;
    //    cout << a + b << endl;

    // 1. �ַ�������
    cin >> x >> y;

    la = x.length();
    lb = y.length();

    for (int i = 0; i < la; i++) {
        // 2. �ַ��� x ת��Ϊ���� a
        a[la - i] = x[i] - '0';
    }
    for (int i = 0; i < lb; i++) {
        // 2. �ַ��� y ת��Ϊ���� b
        b[lb - i] = y[i] - '0';
    }

    lc = max(la, lb);

    // 3. ��ʽ�ӷ�
    //��λ��ʼ
    for (int i = 1; i <= lc; i++) {
        c[i] += a[i] + b[i];

        //��λ
        c[i + 1] = c[i] / 10;

        //
        c[i] %= 10;
    }

    // 4. ��ȥǰ�� 0
    //���λ�н�λ -> �������� 1
    if (c[lc + 1] > 0)
        lc++;

    // 5. �������
    for (int i = lc; i >= 1; i--) {
        cout << c[i];
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

//������洢������
//��ʮ��һ
const int MAXN = 1e6 + 10;

int a[MAXN];

// //��ʮ��һģ��(�� & ����,���⸴��)
// vector<int> add(vector<int>& A, vector<int>& B) {
//     //������
//     vector<int> ans;

//     //��λ(��ʼʱΪ 0)
//     int c = 0;

//     //����
//     for (int i = 0; i < A.size() || i < B.size(); ++i) {
//         //�����λ(���Ȳ�һ����ֻ�ӳ���)
//         if (i < A.size())
//             c += A[i];
//         if (i < B.size())
//             c += B[i];

//         //��ǰλ
//         ans.push_back(c % 10);

//         //��λ
//         c /= 10;
//     }

//     //���λ���н�λ
//     if (c)

//         //ѹ�� 1
//         ans.push_back(1);

//     //���ؽ�� vector ����
//     return ans;
// }
// int main() {
//     //���� a,b ���ַ�����ʽ
//     string a, b;
//     cin >> a >> b;  // a = "123456"

//     //�洢ÿһλ����
//     vector<int> A, B;

//     //��������ַ�������ÿһ���ַ�ת��Ϊ int ���͵�����
//     //�����δ��� vector ����
//     for (int i = a.size() - 1; i >= 0; --i)  // A = [6,5,4,3,2,1]
//         A.push_back(a[i] - '0');
//     for (int i = b.size() - 1; i >= 0; --i)
//         B.push_back(b[i] - '0');

//     //���üӷ�
//     auto ans = add(A, B);

//     //���(����)
//     for (int i = ans.size() - 1; i >= 0; --i)
//         printf("%d", ans[i]);
//     return 0;
// }