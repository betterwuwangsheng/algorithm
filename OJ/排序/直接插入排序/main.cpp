#include <bits/stdc++.h>

using namespace std;

void InsertSort(int a[], int len) {

    //在已经排序的元素中从后向前比较
    //默认a[0] 有序
    for(int i = 1; i < len; i++) {

        //已经排序元素的最后一个元素
        //因为前 i-1 个数都是从小到大的有序序列，所以只要当前比较的数 (a[index]) 比 current 大，就把这个数后移一位
        int index = i - 1;

        // 保存当前访问元素
        // 取出第 i 个数，和前 i-1 个数比较后，插入合适位置
        int current = a[i];

        for(index = i - 1; index >= 0 && a[index] > current; index--){
            a[index + 1] = a[index];
        }
        //        //将元素后移
        //        while(index >= 0  && a[index] > current) {
        //
        //            // 将大于 current 的数据后移
        //            a[index + 1] = a[index];
        //
        //            // 向前比较
        //            index--;
        //        }

        //插入到正确位置
        a[index + 1] = current;
    }
}
int main() {
    int a[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    InsertSort(a, 10);

    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
