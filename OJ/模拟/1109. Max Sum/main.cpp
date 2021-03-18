#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int pre_sum[MAXN];

int main() {

    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);

        int sum = 0;
        for(int i = 0; i < n; ++i) {
            int num;
            scanf("%d", &num);
            sum +=  num;
            pre_sum[i] = sum;
        }

        for(int i = 0; i < n; ++i){
            cout << pre_sum[i] << endl;
        }
    }
    return 0;
}
