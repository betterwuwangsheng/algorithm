#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define MAX 100

//********** Specification of Sort **********
void Sort(int *p, int n)
/* PreCondition:  p指向一个整数数组，n是范围为2-100的数组元素个数
    PostCondition: 按降序对数组进行排序
*/

{
     for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(p[i] < p[j]){
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
     }
}

/***************************************************************/
int main() {
    int n, i;
    int a[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    Sort(a, n);
    for (i = 0; i < n; i++)
        printf("%d%c", a[i], i < n - 1 ? ' ' : '\n');
    return 0;
}
