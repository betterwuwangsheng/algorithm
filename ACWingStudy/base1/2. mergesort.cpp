#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

int a[MAXN];

//暂时存储合并完的数据
int temp[MAXN];

//归并排序
void merge_sort(int a[], int l, int r) {
    //数组元素为空或者只有一个元素
    if (l >= r)
        return;
    //确定分界点(中间位置元素)
    int mid = l + r >> 1;

    //递归排序左右
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);

    //归并
    //记录已经归并的数量
    int index = 0;

    // i j 分别指向两部分的首元素
    int i = l, j = mid + 1;

    //比较
    //合法位置
    while (i <= mid && j <= r) {
        //将较小的元素存入 res 数组
        if (a[i] <= a[j])
            temp[index++] = a[i++];
        else
            temp[index++] = a[j++];
    }

    //左端元素更多
    while (i <= mid)
        temp[index++] = a[i++];

    //右端元素更多
    while (j <= r)
        temp[index++] = a[j++];

    //复制元素到 a 数组
    for (i = l, j = 0; i <= r; ++i, ++j)
        a[i] = temp[j];
}
int main() {
    int n;
    scanf("%d", &n);

    //读入
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    //归并排序
    merge_sort(a, 0, n - 1);

    //输出
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}