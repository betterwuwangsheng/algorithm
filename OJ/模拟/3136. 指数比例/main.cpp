#include <bits/stdc++.h>

using namespace std;

double num[55];
int main() {
    int t;
    cin >> t;
    int caseNum = 0;
    while(t--) {
        int n;
        cin >> n;

        double sum = 0;
        for(int i = 0; i < n; ++i) {
            cin >> num[i];
            sum += exp(num[i]);
        }

        //平均值
        double avg = 1.0 / n;

        //从大到小的顺序
        sort(num, num + n, greater<double>());

        printf("case #%d:\n", caseNum++);
        for(int i = 0; i < n; ++i) {
            if((exp(num[i]) / sum) > (avg / 2 * 1.0)) {
                printf("%.2f\n", num[i]);
            }
        }
    }
    return 0;
}
