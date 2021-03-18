#include <bits/stdc++.h>

using namespace std;

/**
��Ŀ����
SUM������Ա�ʾΪ�������ĸ�����ֵ���б�A��B��C��D����������A x B x C x D���ĸ���Ԫ�飨a��b��c��d��ʹ��a + b + c + d = 0�������棬���Ǽ��������б�Ĵ�С����ͬ

�����ʽ
�����ļ��ĵ�һ�а����б�n�Ĵ�С����ֵ�������Ϊ4000����Ȼ��������n�а����ĸ�����ֵ������ֵ���Ϊ2^{28}
28
  �����ֱ�����A��B��C��D��

���༭�� n <= 2500��

�����ʽ
���Ӧ��ӡ��һ���ϡ�

���ⷭ��
����4������A,B,C,D��Ҫ��ÿ��������ȡ��1������ʹ4�����ĺ�Ϊ0�������������ϸ�������һ���������ж����ͬ������ʱ����������Ϊ��ͬ�����ֿ�����

���룺

��һ�У�n

����n�У�ÿ��4��������i��Ϊai,bi,ci,di��

�����

�����������

���ƣ�

n <= 4000��

|ai,bi,ci,di|<=2^28

�����������
���� #1����
6
-45 22 42 -16
-41 -27 56 30
-36 53 -37 77
-36 30 -75 -46
26 -38 -10 62
-32 -54 -6 45
��� #1����
5
*/

const int N = 4000 + 10;
int n;
int len;

//����
int L[N][5];

//n �� n ��
int aPb[N * N];
int cPd[N * N];
int p1 = 1;
int p2 = 1;
//���ҵ�һ�� >= val �������±�
int lowerBound(int val) {
    int ans = -1;
    int l = 0, r = N - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        // >= B ����
        if(cPd[mid] >= val) {
            ans = mid;

            //����߼�������
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

//���ҵ�һ�� > val ����
int upperBound(int val) {
    int ans = -1;
    int l = 0, r = N - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        // >= B ����
        if(cPd[mid] > val) {
            ans = mid;

            //����߼�������
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {

    int n;
    scanf("%d", &n);

    //�� 1 ��ʼ�洢���������
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= 4; j++) {
            scanf("%d", &L[i][j]);
        }
    }

    //��� A + B
    //��� C + D
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            aPb[p1++] = L[i][1] + L[i][2];
            cPd[p2++] = L[i][3] + L[i][4];
        }
    }
    len = n * n;
    sort(aPb, aPb + 1 + len);

    long long res = 0;

    //ö�� A + B -> Ѱ�� -(C + D) -> ����
    for(int i = 0; i < n; ++i) {
        int x = aPb[i];
        int y = 0 - x;

        //ͳ�� -(A + B) �ĸ���
        //��ѯ��һ�� > ������λ�� upper_bound
        //��ѯ��һ�� >= ������λ�� lower_bound
        res += upperBound(y) - lowerBound(y);
    }
    printf("%lld", res);
    return 0;
}
