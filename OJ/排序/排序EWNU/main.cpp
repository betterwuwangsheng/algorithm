#include <bits/stdc++.h>

using namespace std;

/**
����ʱ��: 2.0 sec

�ڴ�����: 256 MB

�� 3 ������ a,b,c, Ҫ�󰴴�С˳���������� .

�����ʽ
3 ������ a,b,c.

�����ʽ
����С�����˳����� .
*/

int a[3];
int main() {

    while(scanf("%d", &a[0]) != EOF) {
        for(int i = 1; i < 3; i++) {
            scanf("%d",&a[i]);
        }
    }

    sort(a, a+3);

    for(int i = 0; i < 3; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
