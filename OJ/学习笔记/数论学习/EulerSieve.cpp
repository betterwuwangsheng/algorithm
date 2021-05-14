#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e8;

/**
    30 = 2 * 3 * 5
    �ڰ���ɸ�м��� 2 3 5 �ı���ʱһ����ɸѡ�� 3 �Σ���������Ҫ�Ĳ���

    ����취:
    ö���Ѿ������������
    ���������Ѿ���ɸѡ�����Ͳ�����ɸѡ
*/
bool is_prime[MAXN];
int prime[MAXN];

void EulerSieve(int n) {
    //��ʼ��
    memset(is_prime, true, sizeof(is_prime));
    int cnt_num = 1;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i])  // ������
            prime[cnt_num++] = i;
        for (int j = 1; j < cnt_num; ++j) {
            if (i * prime[j] > n)  // Խ��
                break;
            is_prime[i * prime[j]] = false;  // ɸȥ������ i ��
            if (i % prime[j] == 0)  // ֮ǰ�Ѿ�ɸѡ��,�����ظ�ɸѡ
                break;
        }
    }
}

int main() {
    clock_t start = clock();
    EulerSieve(10000000);

    cout << endl;
    clock_t end = clock();
    cout << end - start << endl;
    return 0;
}