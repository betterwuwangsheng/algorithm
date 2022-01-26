#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

int a[MAXN];

//快速排序
void quick_sort(int a[], int l, int r)
{
    //数组为空或者只有一个数
    if (l >= r)
        return;

    //分界点,枢轴元素(中间位置元素)
    int pivot = a[l + r >> 1];

    //两侧指针(数组两边界之外, i j 同时往中间移动)
    int i = l - 1, j = r + 1;

    //不断循环
    while (i < j)
    {
        //左右指针向中间移动
        do
        {
            i++;
        } while (a[i] < pivot); //遇到第一个大于 pivot的值
        do
        {
            j--;
        } while (a[j] > pivot); //遇到第一个小于 pivot的值

        //没有相遇
        if (i < j)
            //交换a[i], a[j]
            swap(a[i], a[j]);
    }
    //递归处理左右两端
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}

//快速排序
int main()
{
    int n;
    scanf("%d", &n);

    //读入数据
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //快速排序
    quick_sort(a, 0, n - 1);

    //输出
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}