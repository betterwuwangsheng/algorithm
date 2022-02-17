#include <iostream>

using namespace std;

const int MX = 2010;
int a[MX];

// 快速排序模板
void quick_sort(int a[], int l, int r) {
    // 判断参数是否复合要求(也可跳出递归)
    if (l >= r)
        return;

    // 使用中间位置为 pivot 元素
    int pivot = a[l + r >> 1];

    // 定义两个指针
    // 一个指向数组首元素的前一个位置
    // 另一个指向数组的最后一个元素的后一个位置
    int i = l - 1, j = r + 1;

    // 当左指针在右指针之前时
    while (i < j) {
        // 目的是: 在 pivot 元素的左边找到第一个比 pivot 元素大的
        // 当左指针指向的元素 <  pivot 元素 -> 做循环
        do {
            // 向右移动左指针
            i++;
        } while (a[i] < pivot);

        // 目的是: 在 pivot 元素的右边找到第一个比 pivot 元素小的
        // 当右指针指向的元素 >  pivot 元素 -> 做循环
        do {
            // 向左移动右指针
            j--;
        } while (a[j] > pivot);

        // 判断移动后的两个指针是否合法
        // 合法则交换两个元素
        if (i < j)
            swap(a[i], a[j]);
    }

    // 对交换后的数组左右两个部分递归排序
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    quick_sort(a, 0, n - 1);

    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}