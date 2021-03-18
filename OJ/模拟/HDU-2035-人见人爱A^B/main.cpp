#include <bits/stdc++.h>

using namespace std;

//求A^B的最后三位数表示的整数。
//说明：A^B的含义是“A的B次方”
int main() {

    //多组样例输入
    int a, b;
    int res = 1;
    while(scanf("%d%d", &a, &b) != EOF) {

        //A=0, B=0，则表示输入数据的结束，不做处理。
        if(a == 0 && b == 0)
            break;

        for(int i = 0; i < b; ++i) {

                //求次方
                res *= a;

                //获取后三位数字
                res %= 1000;
        }
        printf("%d\n", res);

        //重置
        res = 1;
    }
}
