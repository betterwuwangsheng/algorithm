#include <bits/stdc++.h>

using namespace std;

/**
����ʱ��: 2.0 sec

�ڴ�����: 256 MB

����  ������Ҫ�������  �������վ���ֵ��С��������

�� ������ֱ���ļ�������

�����ʽ
����һ���� ��������һ����  ������ ��

�����ʽ
������վ���ֵ��С�������  ���������һ�У�ÿ��������֮���и��ո����һ�����ֺ���û�ո�

����
input
4
-3 -4 1 2
1
10
output
1 2 -3 -4
10

*/

int a[105];

bool cmp(int x,int y) {
    return abs(x) < abs(y);
}
int main() {
    int n,i;

    while(scanf("%d", &n) != EOF) {
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        sort(a, a + n, cmp);

        for(i = 0; i < n; i++) {
            printf("%d", a[i]);

            //��������������
            if(i != n - 1) {

                //�������һ�������������ո�
                printf(" ");
            } else {
                //���һ�����,�������
                printf("\n");
            }
        }
    }
    return 0;
}
