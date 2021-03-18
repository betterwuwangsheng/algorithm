#include <bits/stdc++.h>

using namespace std;

map<string, int> mp = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9},
};
int main() {

    int n;
    cin >> n;

    int caseNum = 0;
    while(n--) {
        vector<int> vt1, vt2;
        int sum1 = 0;
        int sum2 = 0;
        string s;

        while(1) {
            cin >> s;
            if(s == "+")
                break;
            vt1.push_back(mp[s]);
        }
        while(1) {
            cin >> s;
            if(s == "=")
                break;
            vt2.push_back(mp[s]);
        }

        int len1 = vt1.size();
        int len2 = vt2.size();

        for(int i = 0;  i < len1; ++i) {
            sum1 += vt1[i] * pow(10, len1 - i - 1);
        }

        for(int i = 0; i < len2; ++i) {
            sum1 += vt2[i] * pow(10, len2 - i - 1);
        }
        printf("case #%d:\n%d\n", caseNum++, sum1 + sum2);
    }
    return 0;
}
