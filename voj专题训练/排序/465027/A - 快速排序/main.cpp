#include <iostream>

using namespace std;

const int MX = 1e5 + 10;
int a[MX];

void quick_sort(int a[], int l, int r) {
    // 判断要排序的左右位置是否合法
    if (l >= r)
        return;

    int pivot = a[l + r >> 1];
    int i = l - 1, j = r + 1;

    while (i < j) {
        do {
            i++;
        } while (a[i] < pivot);

        do {
            j--;
        } while (a[j] > pivot);

        if (i < j)
            swap(a[i], a[j]);
    }

    // 递归排序
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    quick_sort(a, 0, n - 1);

    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}