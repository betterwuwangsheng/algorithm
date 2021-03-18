#include <iostream>
#include <cstdio>
using namespace std;

/**
单点时限： 2.0秒

内存限制： 256 MB

众所周知，在计算机世界中，语言用'0'和'1'表示。问题来了，partychen想要知道一个二进制数字中有多少个'0'和'1'。十进制。

输入格式
输入的第一行给出了案例数， 。  测试用例如下。

下一个  每行将包含一个整数  如上所述，基于十进制。

输出格式
对于每个测试用例，在一行中输出两个数字分别代表“ 0”和“ 1”的总和。

暗示：

如果给您以10为基数的十进制数，则得到以1010为基数的二进制数，并且有两个0和两个1，因此必须输出2 2。

样例
输入值
2
10
11
输出量
2 2
1 3
*/
int main() {

    int N,num;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        int cnt_a = 0, cnt_b = 0;
        scanf("%d", &num);

        while(1) {
            int a = num % 2;  //获得最后一位

            if(a == 1)
                cnt_a++;

            num = num / 2;  //右移

            if(a == 0)
                cnt_b++;

            if(num == 0)
                break;
        }
        printf("%d %d\n",cnt_b, cnt_a);
    }

    return 0;
}
