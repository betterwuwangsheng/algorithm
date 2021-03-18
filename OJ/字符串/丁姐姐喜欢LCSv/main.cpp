#include <bits/stdc++.h>

using namespace std;

/**
时间限制：C/C++ 1秒，其他语言2秒
空间限制：C/C++ 131072K，其他语言262144K
64bit IO Format: %lld

题目描述
丁姐姐最近迷上了LCS(The longest common substring)!

今天她想找个其它东西玩，于是她找到了两个字符串A和B，现在她想知道它们尾头衔接形成的最长字符串,例如A = abc,B = bca从A的尾部开始，A串的bc与B串的bc头尾衔接。

输入描述:
输入数据包含多个测试样例，每个测试样例占两行，第一行是字符串A，第二行是字符串B，保证每个字符串的长度不超过1010。
输出描述:
A和B尾头衔接形成的最长字符串，对于每个测试实例，输出一行，若两个字符串不衔接，输出"NULL!"（包含引号）。
示例1

输入
复制

abc
bca
wad
ad
as
asd
wa
aw
wa
wwa
输出
复制

bc
ad
as
a
"NULL!"
*/
int main() {
    string A, B;

    ///多组数据
    while(cin >> A >> B) {
        int flag = 0;

        int len1 = A.size();
        int len2 = B.size();

        ///寻找最长公共子串
        int len = min(len1, len2);

        ///从后至前寻找子串是否相同
        for(int i = len; i >= 1; i--) {

            ///通过子字符串进行比较
            /// abc bc
            /// a bc bc
            ///   || ||
            string s1 = A.substr(len1 - i,i);
            string s2 = B.substr(0, i);

            ///子串相同
            if(s1 == s2) {

                ///输出
                cout << s1 << endl;

                ///标记
                flag = 1;

                ///跳出循环
                break;
            }
        }
        if(flag == 0) {
            cout << '"' << "NULL!" << '"' << endl;
        }
    }

    return 0;
}
