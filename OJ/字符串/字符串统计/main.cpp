#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
对于给定的一个字符串，统计其中数字字符出现的次数。


Input
输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。


Output
对于每个测试实例，输出该串中数值的个数，每个输出占一行。


Sample Input
2
asdfasdf123123asdfasdf
asdf111111111asdfasdfasdf


Sample Output
6
9
*/
const int MAX_LEN = 1e5;
int res[MAX_LEN] = {0};

int main() {

    ///测试数据组数
    int n;
    cin >> n;

    while(n--) {
        string str;
        cin >> str;

        int cnt = 0;
        for(int i = 0; i < str.size(); i++) {
            if(str[i] >= '0' && str[i] <= '9') {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
