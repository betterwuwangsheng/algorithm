#include <bits/stdc++.h>

using namespace std;

/**
2008. ��ѯ
����ʱ��: 2.0 sec

�ڴ�����: 256 MB

�ȸ������ɸ�����Ȼ������ĳЩ���Ƿ�������

�����ʽ
���Ǹ������֣�һ���� ����ʾ������  ������������  �У�ÿ��һ���� ��

Ȼ����ѯ�ʲ��֣�һ���� ����ʾ������  ������������  �У�ÿ��һ���� ��

�����ʽ
����  ��ѯ�ʣ����ѯ�ʵ������������� yes!��������� no!, ռһ�С�

����
input
3
1
2
3
4
1
2
3
4
output
yes!
yes!
yes!
no!
*/

int a[110];
int b[110];
int c[110];
int mylist[110]; //��¼ 110 ����ֵ
//int main() {
//
//    memset(c,0,sizeof(c));
//
//    int n,m;
//    scanf("%d", &m);
//
//    for(int i = 0; i < m; i++) {
//        scanf("%d", &a[i]);
//    }
//    scanf("%d", &n);
//
//    for(int i = 0; i < n; i++) {
//        scanf("%d", &b[i]);
//    }
//    //a 1 2 3
//    //b 1 2 3 4
//    for(int i = 0; i < n; i++) {
//
//        for(int j = 0; j < m; j++)
//            if(b[i] == a[j]) {
//                c[i]++;
//            }
//    }
//
//    for(int i = 0; i < n; i++) {
//        if(c[i] > 0) {
//            printf("yes!\n");
//        } else {
//            printf("no!\n");
//        }
//    }
//    return 0;
//}

int  main() {
    memset(mylist,0,sizeof(mylist));

    int num;

    int m;
    scanf("%d", &m);
    while(m--) {
        scanf("%d", &num);

        //��ֵ���ж�Ӧλ���� 1 -> ����
        mylist[num] = 1;
    }

    int n;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &num);

        //ӳ�䵽��λ�õ�ֵ�Ƿ�Ϊ 1?
        if(mylist[num])  //��¼
            printf("yes!\n");
        else
            printf("no!\n");
    }
    return 0;
}
