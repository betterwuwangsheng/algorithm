#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int t, n, ai;

int main() {
    scanf("%d", &t);
    while (t--) {
        set<int> st;
        scanf("%d", &n);
        while (n--) {
            scanf("%d", &ai);
            st.insert(ai);
        }

        for (auto s : st)
            printf("%d ", s);
        printf("\n");
    }
    return 0;
}