#include <bits/stdc++.h>

using namespace std;

/**
    շת�����
*/

//���������
int getGreatestCommonFactor(int n, int m) {
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
    return m;
}
int main() {
    int n, m,o;
    scanf("%d %d %d", &n, &m, &o);

    int temp = getGreatestCommonFactor(n,m);
    int res = getGreatestCommonFactor(temp, o);
    //���Լ���ǳ���
    printf("%d\n", res);
    return 0;
}
