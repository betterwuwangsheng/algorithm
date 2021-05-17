
//交换函数
void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

/**
 * 快速排序算法
 * int a[]:待排序数组
 * int l: 数组左边界
 * int r: 数组右边界
 */
void quick_sort(int a[], int l, int r) {
    //数组中没有元素或者只有一个元素
    if (l >= r)
        return;  //不进行操作

    //选取枢轴元素
    int pivot = a[l + r >> 1];  //此处选取中间位置元素

    int i = l - 1, j = r + 1;  // i,j 分别指向数组左边界前一位置，右边界后一位置

    //当 i < j 时,不断循环
    while (i < j) {
        do {
            i++;
            // i 不断移动,直到所指元素大于枢轴元素(只要
            // i 所指位置元素小于枢轴元素,就说明该元素所处区间正确)
        } while (a[i] < pivot);

        do {
            j--;
            // j 不断移动,直到所指元素小于枢轴元素
        } while (a[j] > pivot);

        //没有相遇
        if (i < j)
            swap(a[i], a[j]);  //交换i,j所指元素
    }

    //递归
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}