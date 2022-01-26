#include <algorithm>
#include <iostream>

using namespace std;

const int MX = 1e5 + 10;
int a[MX];

int main() {
    int cnt = 0;
    while (scanf("%d", &a[cnt]) != EOF) {
        ++cnt;
    }

    // n 个数只要 n - 1 趟排序
    for (int i = 0; i < cnt + 1; i++) {
        for (int j = 0; j < cnt - i - 1; j++) {
            //相邻两个元素作比较，如果前面元素大于后面，进行交换
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < cnt; ++i) {
        if (i != cnt - 1)
            printf("%d ", a[i]);
        else
            printf("%d", a[i]);
    }
    return 0;
}