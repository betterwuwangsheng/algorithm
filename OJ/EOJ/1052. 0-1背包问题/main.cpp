#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100100;
int w[MAXN], p[MAXN], dp[MAXN];
int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(dp, 0, sizeof(dp));
        // n ��Ʒ
        // m ��������
        int n, m;
        cin >> n >> m;

        //���� n ����Ʒ�������ͼ�ֵ
        for (int i = 1; i <= n; ++i)
            cin >> w[i] >> p[i];

        for (int i = 1; i <= n; ++i) {
            for (int j = m; j >= w[i]; --j)
                dp[j] = max(dp[j], dp[j - w[i]] + p[i]);
        }
        cout << dp[m] << endl;  //����� dp �е����һ��Ԫ��(�� -> ��������)
    }
    return 0;
}
