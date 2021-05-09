#include <bits/stdc++.h>

using namespace std;

/**
单点时限： 4.0秒

内存限制： 256 MB

您要处理一个序列  交换两个相邻的序列元素，直到该序列以升序排序，从而获得不同的整数。

输入格式
有几个测试用例，请处理到EOF。

对于每个测试用例，第一行包含整数  。第二行包含 空格分隔的整数  。

输出格式
对于每个测试用例，在一行中输出最少的交换时间。

样例
输入值
2
1 2
输出量
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
