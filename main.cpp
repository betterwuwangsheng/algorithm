// int a[] 待排序数组
// int left 数组左边界
// int right 数组右边界
//快速排序
void quick_sort(int a[], int left, int right) {
    //数组为空或者只有一个数
    if (left >= right)
        return;

    //分界点,枢轴元素(中间位置元素)
    int pivot = a[left + right >> 1];

    //两侧指针(数组两边界之外, i j 同时往中间移动)
    int i = left - 1, j = right + 1;

    //不断循环
    while (i < j) {
        //左右指针向中间移动
        do {
            i++;
        } while (a[i] < pivot);  //遇到第一个大于 pivot的值
        do {
            j--;
        } while (a[j] > pivot);  //遇到第一个小于 pivot的值

        //没有相遇
        if (i < j)
            //交换a[i], a[j]
            swap(a[i], a[j]);  // swap 函数在冒泡排序函数中已出现过
    }
    //递归处理左右两端
    quick_sort(a, left, j);
    quick_sort(a, j + 1, right);
}