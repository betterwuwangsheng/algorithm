#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int a[MAXN];

void quick_sort(int a[], int l, int r) {
    //数组中没有元素或者只有一个元素
    if (l >= r)
        return;

    //选取数轴元素
    int pivot = a[l + r >> 1];

    int i = l - 1, j = r + 1;

    //不断循环
    while (i < j) {
        do {
            i++;
        } while (a[i] < pivot);

        do {
            j--;
        } while (a[j] > pivot);

        //没有相遇
        if (i < j)
            swap(a[i], a[j]);
    }

    //递归
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}
int main() {
    int n;
    scanf("%d", &n);

    //读入数据
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //快速排序
    // quick_sort(a, 0, n - 1);

    //或者
    // sort(a, a + n);

    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}