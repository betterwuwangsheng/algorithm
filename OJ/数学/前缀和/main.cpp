#include <bits/stdc++.h>

using namespace std;

/**
ǰ׺�ͣ�
    ǰ׺����һ�������ĳ���±�֮ǰ(��������Ԫ��)����������Ԫ�صĺ͡�

    ��prefixSum[]Ϊǰ׺�����飬a[]Ϊԭ���飬������仰���Եõ�ǰ׺�͵Ķ���ʽ�͵���ʽ��

    һάǰ׺��: prefixSum[i] = prefixSum[i - 1] + a[i]
    ��άǰ׺��: prefixSum[x][y] = prefixSum[x-1][y] + prefixSum[x][y - 1] - prefixSum[x - 1][y - 1] + a[x][y]


    ���׵õ� prefixSum[i] = prefixSum[i-1] + a[i] ��
    �����Ϳ��Եõ�ǰ i ����(�����Լ�)�ĺ�
*/

const int MAX_N = 1e5 + 5;

int a[MAX_N];
int prefixSum[MAX_N];

int main() {

    //������
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        //��ȡ����
        scanf("%d", &a[i]);

        //��ǰ׺��
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    int t;
    scanf("%d", &t);
    while (t--) {
        int left, right;
        int sum = 0;
        scanf("%d %d", &left, &right);

        //���ĳ�����ڵ�ǰ׺��
        sum = prefixSum[right] - prefixSum[left - 1];
        printf("%d\n", sum);
    }
    return 0;
}
