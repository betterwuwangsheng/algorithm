#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
int a[MAXN];
int ans[MAXN];

int main() {
    int n;
    cin >> n;

    //����
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    //����
    for (int i = 1; i <= n; i++)

        //�ӵ� i ��λ�õ�����ǰ��
        for (int j = i; j >= 1; j--) {
            //�ҵ��ȵ� i �����
            if (a[j] < a[i])
                ans[i]++;
        }
    //���
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    return 0;
}