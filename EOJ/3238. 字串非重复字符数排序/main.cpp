#include <bits/stdc++.h>

using namespace std;

//按字符串中不同字符个数从多到少的顺序进行排序
//不同字符个数相同的字符串按字符串的字典序排序
bool cmp(string a, string b) {
    if(){

    }
}
int main() {
    //问题数
    int T;
    while(scanf("%d", &T) != EOF) {

        int caseNum = 0;
        while(T--) {
            int n;
            while(n--) {

                vector<string> vts;
                string s;
                cin >> s;
                vts.push_back(s);
            }

            //排序
            sort(vts.begin(), vts.end(), cmp);
            printf("case #%d:\n", caseNum++);
        }
    }
    return 0;
}
