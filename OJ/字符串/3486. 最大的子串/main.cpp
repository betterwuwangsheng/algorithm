#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {

    ///创建 vector
    vector<string> vt;

    //读入字符串
    string str;
    cin >> str;

    ///取出前导 0
    ///在字符串中搜索与参数中指定的任何字符都不匹配的最后一个字符。
    str.erase(str.find_last_not_of("0") + 1);

    ///字符串长度
    int len = str.length();

    ///字符串长度为 0
    if(len == 0)
        cout<< "0" <<endl;
    else {
        for(int i = len - 1; i >= 0; i--)

            ///加入vector
            vt.push_back(str.substr(i,len));

        ///排序
        sort(vt.begin(), vt.end());
        cout << vt[len - 1] << endl;
    }

    return 0;
}
