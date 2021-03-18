#include <bits/stdc++.h>

using namespace std;

struct Node {
    double r, cita;
};

bool cmp(Node x, Node y) {
    //如果两个点的极角相同，则将它们按照极径 r 由大到小排序。
    if(abs(x.cita - y.cita) <= 10e-8)
        return x.r > y.r;
    return x.cita < y.cita;
}
int main() {

    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        int n;
        cin >> n;

        Node ans[n];
        for(int i = 0; i < n; ++i) {
            double x, y;
            cin >> x >> y;

            ans[i].r = sqrt(x * x + y * y);
            if(y >= 0)
                ans[i].cita = acos(x / ans[i].r);
            else
                ans[i].cita = 2 * acos(-1) - acos(x / ans[i].r);
        }

        //排序
        sort(ans, ans + n, cmp);

        printf("case #%d:\n", caseNum++);

        for(int i = 0; i < n; ++i) {
           cout << "(" << fixed << setprecision(4) << ans[i].r << "," << ans[i].cita << ")" << endl;
        }
    }
    return 0;
}
