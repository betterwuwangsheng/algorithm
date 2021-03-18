#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    set<int> st;
    for(int i = 0; i < n; ++i) {
        int num;
        scanf("%d", &num);
        st.insert(num);
    }

    if(k <= 0 || k > st.size())
        printf("NO RESULT\n");
    else {

        set<int>::iterator it;
        int cnt = 0;
        for(auto it = st.begin(); it != st.end(); ++it) {
            cnt++;
            if(cnt == k) {
                printf("%d\n", *it);
                break;
            }
        }
    }
    return 0;
}
