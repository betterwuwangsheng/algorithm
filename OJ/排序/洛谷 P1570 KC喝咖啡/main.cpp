#include <bits/stdc++.h>

using namespace std;

const int N = 200 + 10;
int v[N];
int c[N];

int check(int n, int m, double mid) {

    //贪心
    vector<double> res;
    double p = 0;
    for(int i = 1; i <= n; ++i) {
        p = v[i] - c[i] * mid;
        res.push_back(p);
    }

    sort(res.begin(), res.end());

    double sum = 0;
    for(int i = n - 1; i >= n - m; --i) {
        sum += res[i];
    }

    if(sum > 0)
        return true;
    return false;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    for(int i = 1; i <= n; ++i) {
        scanf("%d", &v[i]);
    }
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &c[i]);
    }

    double l = 0, r = 1000;

    //-1 -> 无解
    double res = -1;
    while((r - l) >= 1e-9) {
        double mid = l + (r - l) / 2;
        if(check(n, m, mid)) {

            res = mid;
            l = mid;
        } else {
            r = mid;
        }
    }
    printf("%.3f\n", res);
    return 0;
}
