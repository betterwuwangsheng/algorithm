#include <bits/stdc++.h>

using namespace std;

/**
����ʱ�ޣ� 4.0��

�ڴ����ƣ� 256 MB

��Ҫ����һ������  �����������ڵ�����Ԫ�أ�ֱ�����������������򣬴Ӷ���ò�ͬ��������

�����ʽ
�м��������������봦��EOF��

����ÿ��������������һ�а�������  ���ڶ��а��� �ո�ָ�������  ��

�����ʽ
����ÿ��������������һ����������ٵĽ���ʱ�䡣

����
����ֵ
2
1 2
�����
0
*/
const int MAX_N = 1e5 + 1;
int a[MAX_N];
int main()
{
    int n, i, cnt;
    while(scanf("%d", &n) != EOF){
        while(n--){
            scanf("%d", &a[i]);
        }
//    for(i = 0; i < n;i++){
//        printf("%d ", a[i]);
//    }
        cnt = 0;
        for(i = 0; i < n; i++){
            if(a[i] > a[i + 1]){

                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
