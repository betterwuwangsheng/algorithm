#include <iostream>
#include <vector>

using namespace std;

typedef long long LL;

vector<LL> solve(int num) {
    vector<LL> res(num + 1, 1);
    for (int i = 2; i <= num; ++i) {
        res[i] = res[i - 1] + 2 * (i - 1) + 1;
    }
    return res;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int num;
        scanf("%d", &num);
        vector<LL> ans = solve(num);
        printf("%lld\n", ans[num]);
    }
    return 0;
}
