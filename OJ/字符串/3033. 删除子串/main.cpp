#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int caseNum = 0;
    while(n--) {
        string source, replace;
        cin >> source >> replace;

        int lens = source.length();
        int lenr = replace.length();

        printf("case #%d:\n", caseNum++);

        //遍历源串
        for(int i = 0; i < lens; i++) {

            //若子串和待替换串相同
            if(source.substr(i, lenr) == replace)

                //指针后移待查找串长度 - 1
                i += lenr - 1;
            else

                //不匹配则输出
                cout << source[i];
        }
        cout << endl;
    }
    return 0;
}
