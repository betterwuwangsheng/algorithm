#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int a[MAXN];

//暂存合并序列
int temp[MAXN];

//归并排序
void merge_sort(int a[], int l, int r) {
    //数组中只有一个元素或者没有元素
    if (l >= r)
        return;

    //分界点
    int mid = l + r >> 1;

    //递归排序左右
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);

    //定义已经归并的元素数量
    int index = 0;

    //定义每一段的起始位置
    int i = l, j = mid + 1;

    //每一段位置合法时
    while (i <= mid && j <= r) {
        //判断大小
        if (a[i] <= a[j])
            temp[index++] = a[i++];  //加入较小元素
        else
            temp[index++] = a[j++];
    }

    //处理完毕可能存在还有一个区间有剩余未处理的数据
    //左边区间元素更多
    while (i <= mid)
        temp[index++] = a[i++];

    //右边区间元素更多
    while (j <= r)
        temp[index++] = a[j++];

    //赋值元素
    for (i = l, index = 0; i <= r;)
        a[i++] = temp[index++];
}
int main() {
    int n;
    scanf("%d", &n);

    //读入数据
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //归并排序
    merge_sort(a, 0, n - 1);

    //输出
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}