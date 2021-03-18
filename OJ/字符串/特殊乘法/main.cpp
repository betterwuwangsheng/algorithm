#include <bits/stdc++.h>

using namespace std;

/**
题目描述
写个算法，对2个小于1000000000的输入，求结果。 特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5

输入描述:
两个小于1000000000的数
输出描述:
输入可能有多组数据，对于每一组数据，输出Input中的两个数按照题目要求的方法进行运算后得到的结果。
示例1

输入
123 45
输出
54
*/
int main() {

    string str1;
    string str2;

    while(cin >> str1 >> str2) {
        int sum = 0;
        int len1 = str1.size();
        int len2 = str2.size();
        for(int i = 0; i < len1; i++) {
            for(int j = 0; j < len2; j++) {

                ///str1[i] - '0'就是把一个字符的ASCII值减去字符 '0' 的ASCII值
                sum += (str1[i] - '0') * (str2[j] - '0');
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
