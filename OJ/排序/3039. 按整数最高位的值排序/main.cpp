#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) {

    //获得最高位数字
    char ah = a[0] == '-'? a[1] : a[0];
    char bh = b[0] == '-'? b[1] : b[0];

    if (ah == bh)
        //若两个数的最高位的值相同，则按照数本身值由小到大排序
        return stoll(a) < stoll(b);

    //最高位不同按照整数十进制表示的最高位的值从大到小进行排序
    return ah > bh;
}

int main() {
    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        int n;
        cin >> n;

        vector<string> vt;
        for(int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            vt.push_back(s);
        }

        sort(vt.begin(), vt.end(), cmp);


        printf("case #%d:\n", caseNum++);
        for(int i = 0; i < n; ++i) {
            cout << vt[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
