#include <bits/stdc++.h>

using namespace std;

int a[22][22];

int main() {
    int n;
    scanf("%d", &n);

    ///����ͼ��
    for(int i = 0; i < n; i++) {
        a[i][0] = 1;
        for(int j = 0; j <= i; j++) {

            ///1 2 1
            ///1 3 3 1
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            if(i == j)
                a[i][j] = 1;
        }
    }

    ///���ͼ��
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            ///ÿ�а�����������������Щ������֮����һ���ո�����������ж���Ŀո񣩣����һ������������û�пո�
            if(j != i) {
                printf("%d ", a[i][j]);
            } else {
                printf("%d",a[i][i]);
            }
        }
        printf("\n");
    }
    return 0;
}
