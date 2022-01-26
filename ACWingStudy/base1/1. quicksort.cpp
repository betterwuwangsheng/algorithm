#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

int a[MAXN];

//��������
void quick_sort(int a[], int l, int r)
{
    //����Ϊ�ջ���ֻ��һ����
    if (l >= r)
        return;

    //�ֽ��,����Ԫ��(�м�λ��Ԫ��)
    int pivot = a[l + r >> 1];

    //����ָ��(�������߽�֮��, i j ͬʱ���м��ƶ�)
    int i = l - 1, j = r + 1;

    //����ѭ��
    while (i < j)
    {
        //����ָ�����м��ƶ�
        do
        {
            i++;
        } while (a[i] < pivot); //������һ������ pivot��ֵ
        do
        {
            j--;
        } while (a[j] > pivot); //������һ��С�� pivot��ֵ

        //û������
        if (i < j)
            //����a[i], a[j]
            swap(a[i], a[j]);
    }
    //�ݹ鴦����������
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}

//��������
int main()
{
    int n;
    scanf("%d", &n);

    //��������
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //��������
    quick_sort(a, 0, n - 1);

    //���
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}