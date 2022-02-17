#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

typedef long long LL;

LL num;
int main() {
    int N;
    scanf("%d", &N);
    set<int> st;

    while (N--) {
        scanf("%lld", &num);
        st.insert(num);
    }

    set<int>::iterator it;
    printf("%d\n", st.size());
    for (it = st.begin(); it != st.end(); ++it)
        printf("%lld ", *it);
    return 0;
}