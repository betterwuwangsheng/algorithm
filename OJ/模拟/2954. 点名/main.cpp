#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        int m, n;
        cin >> m >> n;

        char c;
        int cnt = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                cin >> c;
                if(c == '.')
                    cnt++;
            }
        }
        printf("case #%d:\n%d\n", caseNum++, cnt);
    }
    return 0;
}
