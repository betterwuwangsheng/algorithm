#include <bits/stdc++.h>

using namespace std;

/**
2008. 查询
单点时限: 2.0 sec

内存限制: 256 MB

先给你若干个数，然后问你某些数是否给你过。

输入格式
先是给数部分，一个数 ，表示将给你  个数，接下来  行，每行一个数 。

然后是询问部分，一个数 ，表示将给你  个数，接下来  行，每行一个数 。

输出格式
对于  次询问，如果询问的数给你过，输出 yes!，否则，输出 no!, 占一行。

样例
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
int mylist[110]; //记录 110 个数值
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

        //数值表中对应位置置 1 -> 存在
        mylist[num] = 1;
    }

    int n;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &num);

        //映射到该位置的值是否为 1?
        if(mylist[num])  //记录
            printf("yes!\n");
        else
            printf("no!\n");
    }
    return 0;
}
