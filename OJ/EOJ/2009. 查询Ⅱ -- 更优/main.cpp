#include <bits/stdc++.h>

using namespace std;

const int MX = 1e5 + 2;

/**
    查找题 -> 可用映射思想进行优化
*/
//用于映射给的数据
//0 -> 不存在该数
int flag[MX] = {0};

//询问数组
int ask[MX];

//读入的数据
int num;

int main() {

    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &num);
        flag[num] = 1;
    }

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &ask[i]);
        if(flag[ask[i]] == 1) {
            printf("yes!\n");
        } else {
            printf("no!\n");
        }
    }
    return 0;
}
