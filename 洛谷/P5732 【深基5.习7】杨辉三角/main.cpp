#include <bits/stdc++.h>

using namespace std;

const int MAXN = 21;
int a[MAXN][MAXN];
int main() {
    int n;
    cin >> n;

    //����ͼ��
    for (int i = 0; i < n; ++i) {       //��
        a[i][0] = 1;                    //��һ��ȫΪ 1
        for (int j = 1; j <= i; ++j) {  //��
            if (j == i)
                a[i][j] == 1;
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  //���� + �Ϸ�
        }
    }

    //���
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
