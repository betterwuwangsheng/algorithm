#include <bits/stdc++.h>

using namespace std;

/**
    շת�����
*/
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    //n / m(n > m)
    // n < m -> ����
    if(n < m) {
        int temp = n;
        n = m;
        m = temp;
    }
    //����
    int r = n % m;

    while(r) {

        //������Ϊ�µı�����
        n = m;

        //������Ϊ�µĳ���
        m = r;

        //����
        r = n % m;

    }

    //���Լ���ǳ���
    printf("%d\n", m);
    return 0;
}
