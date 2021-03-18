#include <bits/stdc++.h>
#include <stack>

using namespace std;

/**
问题描述
伊格纳修斯喜欢用相反的方式写词。给定由Ignatius编写的单行文本，您应该反转所有单词，然后输出它们。


输入值
输入包含几个测试用例。输入的第一行是单个整数T，它是测试用例的数量。随后是T测试用例。
每个测试用例包含一行，并包含多个单词。一行中最多有1000个字符。


输出量
对于每个测试用例，您应该输出已处理的文本。


样本输入
3
olleh！dlrow
m'I morf .udh
我ekil .mca


样本输出
你好，世界！
我来自hdu。
我喜欢ACM。

暗示

请记住，在整数T之后使用getchar（）读取'\ n'，那么您可以使用gets（）读取一行并进行处理。
*/
int main() {
    int T;
    char c;

    ///初始化栈
    stack<char> stk;
    scanf("%d", &T);

    getchar(); ///吃掉 \n
    for(int i = 0; i < T; i++) {
        while((c = getchar()) != '\n') {

            ///读入空格
            if(c == ' ') {

                ///栈不空
                while(!stk.empty()) {

                    ///打印栈顶内容
                    printf("%c", stk.top());

                    ///出栈
                    stk.pop();
                }
                printf(" ");
            } else {

                ///非空格
                ///入栈
                stk.push(c);
            }
        }

        ///由于最后一个单词后面没有空格
        ///栈不空
        ///打印栈顶元素
        ///出栈
        while(!stk.empty()) {
            printf("%c", stk.top());
            stk.pop();
        }

        cout << endl;
    }
    return 0;
}
