#include <bits/stdc++.h>

using namespace std;

//��¼ 0 - 9 ���ֵĴ���
int cnt[10] = {0};

//��¼���ֳ��ֵĴ���
void count_num(int num) {
    while (num > 0) {
        //��¼��λ����
        int index = num % 10;

        //��Ӧ���ֳ��ִ�������
        cnt[index]++;

        //����
        num /= 10;
    }
}
int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; ++i)
        count_num(i);

    for (int i = 0; i < 10; ++i)
        cout << cnt[i] << " ";
    return 0;
}