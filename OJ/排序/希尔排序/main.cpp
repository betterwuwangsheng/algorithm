#include <bits/stdc++.h>

using namespace std;

void ShellSOrt(int a[], int len){

    //增量为 len / 2， 并且逐步缩小增量
    for(int group = len / 2; group > 0; group /= 2){

        //从第 group 个元素，逐个对其所在分组尽心直接插入排序
        for(int i = group; i < len; i++){
            int index = i;
            int current = a[i];

            //注意此时的插入排序以, group 为步长
            while(index - group >= 0 && a[index - group] > current){
                a[index] = a[index - group];
                index = index - group;
            }
            a[index] = current;
        }
    }
}
int main()
{
     int a[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    ShellSOrt(a, 10);

    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
