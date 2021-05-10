#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    int caseNum = 0;
    while(T--) {
        string s;
        cin >> s;

        s = "0" + s;//一个数开头的 0 省略
        next_permutation(s.begin(), s.end());//下一个全排列

        printf("case #%d:\n", caseNum++);
        if(s[0] == '0') //开头 0 去掉
            s = s.substr(1, s.size());
        cout << s << endl;
    }
    return 0;
}
