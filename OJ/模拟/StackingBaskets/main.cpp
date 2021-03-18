#include <iostream>
#include <cstdio>

using namespace std;

/**

Problem Description
需要的时候，就把一个个大小差一圈的筐叠上去，使得从上往下看时，边筐花色交错。这个工作现在要让计算机来完成，得看你的了。


Input
输入是一个个的三元组，分别是，外筐尺寸n（n为满足0<n<80的奇整数），中心花色字符，外筐花色字符，后二者都为ASCII可见字符；


Output
输出叠在一起的筐图案，中心花色与外筐花色字符从内层起交错相叠，多筐相叠时，最外筐的角总是被打磨掉。叠筐与叠筐之间应有一行间隔。


Sample Input
11 B A
5 @ W


Sample Output
 AAAAAAAAA
ABBBBBBBBBA
ABAAAAAAABA
ABABBBBBABA
ABABAAABABA
ABABABABABA
ABABAAABABA
ABABBBBBABA
ABAAAAAAABA
ABBBBBBBBBA
 AAAAAAAAA

 @@@
@WWW@
@W@W@
@WWW@
 @@@

*/
char matrix[80][80]; //定义矩阵，用于输出图形

int main() {
    //通过标记的真假进行换行
    bool firstCase = true; //用回车符号间隔每一的答案

    int n; //箩筐尺寸
    char a, b; //花色  字符
    while(scanf("%d %c %c",&n, &a, &b) != EOF) { //
        //第一次不换行
        if(firstCase)
            firstCase = false;
        else  //不是第一次，换行
            printf("\n");

        for(int i = 0; i <= n / 2; i++) {
            //i + j = n - 1
            int j = n - i - 1;

            //边长
            int length = n - 2 * i;

            //某一圈使用的花色符号
            char c;
            if((n / 2 - i) % 2 == 0) {
                c = a;
            } else {
                c = b;
            }

            //构造图形
            for(int k = 0; k < length; ++k) {
                //(i,i) 左上角
                //(j,j) 右下角
                matrix[i][i + k] = c; //上边
                matrix[i + k][i] = c; //下边
                matrix[j][j - k] = c; //右边
                matrix[j - k][j] = c; //左边
            }
        }

        //尺寸 = 1 不进行空格替换
        if(n > 1) {
            matrix[0][0] = ' ';
            matrix[0][n - 1] = ' ';
            matrix[n - 1][0] = ' ';
            matrix[n - 1][n - 1] = ' ';
        }

        //输出图形
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf("%c",matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
