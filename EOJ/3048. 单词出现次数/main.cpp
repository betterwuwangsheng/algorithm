#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;


    int caseNum = 0;
    while(t--) {
        vector<string> vta;
        string a, b;
        do {//不断读入单词 -> 读入单词使用这个办法很方便
            cin >> a;
            vta.push_back(a);//放入 vector
        } while (getchar() != '\n');

        cin >> b;

        int cnt = 0;
        for(int i = 0; i < vta.size(); ++i)
            if(vta[i] == b)
                cnt++;
        printf("case #%d:\n%d\n", caseNum++, cnt);
    }
    return 0;
}
