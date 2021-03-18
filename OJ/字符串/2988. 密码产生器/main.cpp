#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    int caseNum = 0;
    while(n--) {
        int sum[6] = {0};
        string s;
        cin >> s;

        int len = s.length();

        for(int i = 0; i < len; ++i) {

            //循环 i % 6
            sum[i % 6] += s[i];

            //取每个数字最后一位
            sum[i % 6] %= 10;
        }
        printf("case #%d:\n", caseNum++);
        for(int i = 0; i < 6; ++i){
            printf("%d", sum[i]);
        }
        printf("\n");
    }
    return 0;
}
