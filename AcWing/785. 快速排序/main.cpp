#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int a[MAXN];

void quick_sort(int a[], int l, int r) {
    //������û��Ԫ�ػ���ֻ��һ��Ԫ��
    if (l >= r)
        return;

    //ѡȡ����Ԫ��
    int pivot = a[l + r >> 1];

    int i = l - 1, j = r + 1;

    //����ѭ��
    while (i < j) {
        do {
            i++;
        } while (a[i] < pivot);

        do {
            j--;
        } while (a[j] > pivot);

        //û������
        if (i < j)
            swap(a[i], a[j]);
    }

    //�ݹ�
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}
int main() {
    int n;
    scanf("%d", &n);

    //��������
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //��������
    // quick_sort(a, 0, n - 1);

    //����
    // sort(a, a + n);

    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}