#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e8;

//����Ƿ�Ϊ����: true -> ����
bool is_prime[MAXN];

void Elbowsieve(int n) {
    //Ĭ��ȫΪ����
    for (int i = 2; i <= n; ++i)
        is_prime[i] = 1;
    //����
    for (int i = 2; i * i <= n; ++i) {
        //������
        if (is_prime[i])
            //������ 2 ������������
            for (int j = 2 * i; j <= n; j += i)
                //��������
                is_prime[j] = 0;
    }
}
int main() {
    clock_t start = clock();
    Elbowsieve(10000000);
    clock_t end = clock();
    cout << endl;
    cout << end - start << endl;
    return 0;
}