#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

int a[MAXN];

//��ʱ�洢�ϲ��������
int temp[MAXN];

//�鲢����
void merge_sort(int a[], int l, int r) {
    //����Ԫ��Ϊ�ջ���ֻ��һ��Ԫ��
    if (l >= r)
        return;
    //ȷ���ֽ��(�м�λ��Ԫ��)
    int mid = l + r >> 1;

    //�ݹ���������
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);

    //�鲢
    //��¼�Ѿ��鲢������
    int index = 0;

    // i j �ֱ�ָ�������ֵ���Ԫ��
    int i = l, j = mid + 1;

    //�Ƚ�
    //�Ϸ�λ��
    while (i <= mid && j <= r) {
        //����С��Ԫ�ش��� res ����
        if (a[i] <= a[j])
            temp[index++] = a[i++];
        else
            temp[index++] = a[j++];
    }

    //���Ԫ�ظ���
    while (i <= mid)
        temp[index++] = a[i++];

    //�Ҷ�Ԫ�ظ���
    while (j <= r)
        temp[index++] = a[j++];

    //����Ԫ�ص� a ����
    for (i = l, j = 0; i <= r; ++i, ++j)
        a[i] = temp[j];
}
int main() {
    int n;
    scanf("%d", &n);

    //����
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    //�鲢����
    merge_sort(a, 0, n - 1);

    //���
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}