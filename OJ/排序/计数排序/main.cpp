#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

/**
计数排序是一个稳定的排序算法.
当输入的元素是n个0到k之间的整数时,时间复杂度是O(n+k),空间复杂度也是O(n+k),其排序速度快于任何比较排序算法.
当k不是很大并且序列比较集中时,计数排序是一个很有效的排序算法.
计数排序的缺点是当最大值最小值差距过大时,不适用计数排序,当元素不是整数值,不适用计数排序.


1.找出待排序的数组中最大和最小的元素；
2.统计数组中每个值为i的元素出现的次数,存入数组C的第i项；
3.对所有的计数累加(从C中的第一个元素开始,每一项和前一项相加）；
4.反向填充目标数组:
    将每个元素i放在新数组的第C(i)项,每放一个元素就将C(i)减去1.

*/
void CountSort(int a[], int len) {

    //数组为空
    if(a == NULL)
        return;

    //初始化最值
    int mx = a[0];
    int mn = a[0];
    int i;

    //1.找出待排序的数组中最大和最小的元素；
    //寻找最值
    for(i = 1; i < len; i++) {
        if(a[i] > mx)
            mx = a[i];
        if(a[i] < mn)
            mn = a[i];
    }

    //计数数组的容量（辅助数组的容量 > 最好大于 mx - mn）
    int l = mx - mn + 1;

    //创建计数数组
    int * cnt = (int*)malloc(sizeof(int) * l);

    //初始化辅助数组为 0
    memset(cnt, 0, sizeof(int) * l);


    //2.统计数组中每个值为 i 的元素出现的次数,存入辅助的第 i 项；
    //遍历待排序数组
    //对应位置的计数数组值增加
    for(i = 0; i < len; i++)
        cnt[a[i] - mn]++;

    //3.对所有的计数累加(从辅助数组中的第一个元素开始,每一项和前一项相加）；
    for(int i = 1; i < l; i++)
        cnt[i] += cnt[i - 1];

    int* psort =(int*) malloc(sizeof(int) * len);
    memset(psort, 0, sizeof(int)*len);

    //4.反向填充目标数组:将每个元素i放在新数组的第C(i)项,每放一个元素就将C(i)减去1.
    for(int i = len - 1; i >= 0; i--) {

        // 计数数组对应位置值减小
        cnt[a[i] - mn]--;

        //输出数组赋值
        psort[cnt[a[i] - mn]] = a[i];
    }

    //将输出数组复制到待排序元素数组中（完成排序）
    for(int i = 0; i < len; i++) {
        a[i] = psort[i];
    }

    free(cnt);
    free(psort);
    cnt = NULL;
    psort = NULL;
}


void print_array(int *arr, int len) {
    for(int i=0; i<len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[8] = {5, 2, 7, 4, 8, 1, 6, 3};
    CountSort(arr, 8);
    print_array(arr, 8);

    return 0;
}
