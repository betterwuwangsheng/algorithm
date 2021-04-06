#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;

    //行数
    int  lines = 0;

    //总长度
    int characters = 0;
    int max_size = 0;

    //getline 返回  0 -> 失败
    //              1 -> 成功
    while(getline(cin, s)) {


        //行数增加
        ++lines;

        int len = s.size();
        characters += len;

        //最长一行 的长度
        max_size = max(len, max_size);

    }
    cout << characters  << ',' << lines << ',' << max_size << endl;

    return 0;
}
