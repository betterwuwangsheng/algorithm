#include <bits/stdc++.h>
using namespace std;

int a[100];

///通过比较合并归并段
void Merge(int a[], int left, int mid, int right) {

    int i = left;
    int j = mid + 1;

    ///临时数组下标
    int  index = 0;

    ///临时数组，暂存结果
    int *help = (int*) malloc(sizeof(int) * (right - left + 1));

    ///两个有且仅有一个越界
    while(i <= mid && j <= right) {
        if(a[i] <= a[j]) {
            help[index++] = a[i++];
        } else {
            help[index++] = a[j++];
        }
    }

    while(i <= mid) { /// j 到头
        help[index++] = a[i++];
    }

    while(j <= right) {/// i 到头
        help[index++] = a[j++];
    }

    index = 0;

    for(int k = left; k <= right; k++){
        a[k] = help[index++];
    }
}

///归并排序
void MergeSort(int a[], int left, int right) {
    if(left >= right)
        return;

    ///中间位置
    int mid = left + (right - left) / 2;

    ///归并排序左边
    MergeSort(a, left, mid);

    ///归并排序右边
    MergeSort(a, mid + 1, right);

    ///合并
    Merge(a, left, mid, right);
}
int main() {


    int a[10] = {1,2,3,4,5,6,7,8,9,0};

    ///闭区间
    MergeSort(a, 0, 9);

    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
