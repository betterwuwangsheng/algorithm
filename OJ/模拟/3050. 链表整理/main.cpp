#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int caseNum = 0;

    while(t--) {
        int lena, lenb;
        cin >> lena >> lenb;

        int a[1000], b[1000];
        for(int i = 0; i < lena; ++i)
            cin >> a[i];

        for(int i = 0; i < lenb; ++i)
            cin >> b[i];

        for(int i = 0; i < lena; ++i) {
            for(int j = 0; j < lenb; ++j) {
                if(a[i] == b[j]) {
                    a[i] = INT_MIN;
                    continue;
                }
            }
        }

        printf("case #%d:\n", caseNum++);
        bool flag = true;
        for(int i = 0; i < lena; ++i) {
            if(a[i] != INT_MIN) {
                if(flag) {
                    flag = false; //第一个不输出空格
                    printf("%d", a[i]);
                } else
                    printf(" %d", a[i]);//后面的输出空格
            }
        }
        printf("\n");
    }
    return 0;
}
