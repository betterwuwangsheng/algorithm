#include <bits/stdc++.h>
#define N 10
using namespace std;

/********** Specification of transpose **********/
void Transpose(void *a, int n) {
    /** PreCondition:
    a is beginning address of a square matrix, n is the number of rows for the matrix, no more than 80.
    PostCondition:
    the matrix is transposed
    */

    int *arr;
    arr = (int *)a;

    int res[10][10];
    int k = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            res[i][j] = arr[k++];
        }
    }
    k = 0;
    for(int col = 0; col < n; col++) {
        for(int row = 0; row < n; row++) {

            //按列输出 -> 列定行加
            arr[k++] = res[row][col];
        }
    }
    a = arr;
}
/***************************************************************/
int main() {
    int *a, n, i;
    scanf("%d", &n);

    a = (int* ) malloc(n * n * sizeof(int));
    for(i = 0; i < n * n; i++)
        scanf("%d", a + i);
    Transpose(a, n);

    for(i = 0; i < n * n; i++) {
        printf("%d ", a[i]);
        if ((i + 1) % n == 0)
            printf("\n");
    }
    free(a);
    return 0;
}
