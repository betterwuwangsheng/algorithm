#include <iostream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

/**
链接：https://www.nowcoder.com/questionTerminal/bbbbf26601b6402c9abfa88de5833163
来源：牛客网

时间限制：C/C++ 1秒，其他语言2秒空间限制：C/C++ 64M，其他语言128M
算法知识视频讲解
输入10个整数，彼此以空格分隔。重新排序以后输出(也按空格分隔)，


要求:
 1.先输出其中的奇数,并按从大到小排列；
 2.然后输出其中的偶数,并按从小到大排列。

输入描述:
任意排序的10个整数（0～100），彼此以空格分隔。

输出描述:
可能有多组测试数据，对于每组数据，按照要求排序后输出，由空格分隔。

1. 测试数据可能有很多组，请使用while(cin>>a[0]>>a[1]>>...>>a[9])类似的做法来实现;
2. 输入数据随机，有可能相等。
示例1
输入
4 7 3 13 11 12 0 47 34 98
输出
47 13 11 7 3 0 4 12 34 98
*/

int num[10];

//比较 -> 定义两个参数根据题目条件进行相应比较
bool Compare(int x, int y) {
    if(x % 2 == 1 && y % 2 == 1) //同为奇数从大到小
        return x > y;
    else if(x % 2 == 0 && y % 2 == 0)//同为偶数偶数从小到大
        return x < y;
    else if(x % 2 == 1 && y % 2 == 0)//一奇一偶
        return true;
    else
        return false;
}
int main() {

    //判断第一个输入是否为 EOF
    //否 -> 继续获取后面的输入
    while(scanf("%d", &num[0]) != EOF) {
        for(int i = 1; i < 10; i++) {
            scanf("%d", &num[i]);
        }

        //排序
        /**
        Sort函数有三个参数：sort(a,a+2,cmp) (0,2]
            （1）第一个是要排序的数组的起始地址。
            （2）第二个是结束的地址。
            （3）第三个参数是排序的方法，默认为升序排列。
                 如需要降序排列，则需要提供bool cmp（）比较函数。
        */
        sort(num, num + 10, Compare);
        for(int i = 0; i < 10; i++) {
            printf("%d ", num[i]);
        }
        printf("\n");
    }
    return 0;
}
