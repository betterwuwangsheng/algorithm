#include <bits/stdc++.h>

using namespace std;

bool check(int mid){

    int sum = 0;
    for(int i = 1; i < mid; ++i){
        sum += i;
        if(sum == mid)
            return true;
    }
    return false;
}
int main() {
    int t;
    scanf("%d", &t);

    int caseNum = 1;
    while(t--) {

        int n;
        scanf("%d", &n);

        int cnt = 0;

        int l = 1, r = 1e6;
        while(l <= r) {

            int mid = (l + r) / 2;

            if(check(mid)) {
                //res = mid;
                cnt++;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        printf("Case %d: %d\n", caseNum++, cnt);
    }
    return 0;
}
