#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int a[MAXN];

//�ݴ�ϲ�����
int temp[MAXN];

//�鲢����
void merge_sort(int a[], int l, int r) {
    //������ֻ��һ��Ԫ�ػ���û��Ԫ��
    if (l >= r)
        return;

    //�ֽ��
    int mid = l + r >> 1;

    //�ݹ���������
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);

    //�����Ѿ��鲢��Ԫ������
    int index = 0;

    //����ÿһ�ε���ʼλ��
    int i = l, j = mid + 1;

    //ÿһ��λ�úϷ�ʱ
    while (i <= mid && j <= r) {
        //�жϴ�С
        if (a[i] <= a[j])
            temp[index++] = a[i++];  //�����СԪ��
        else
            temp[index++] = a[j++];
    }

    //������Ͽ��ܴ��ڻ���һ��������ʣ��δ���������
    //�������Ԫ�ظ���
    while (i <= mid)
        temp[index++] = a[i++];

    //�ұ�����Ԫ�ظ���
    while (j <= r)
        temp[index++] = a[j++];

    //��ֵԪ��
    for (i = l, index = 0; i <= r;)
        a[i++] = temp[index++];
}
int main() {
    int n;
    scanf("%d", &n);

    //��������
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //�鲢����
    merge_sort(a, 0, n - 1);

    //���
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}