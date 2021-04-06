#include <bits/stdc++.h>

using namespace std;

#define MAXN 100003

int a[MAXN],n;

bool check(int mid) {
    int st = a[1] - mid;//第一个数字越小对后来越有利
    for(int i = 2; i <= n; i++) {
        int w = a[i] - mid;//对当前的数字做最大尺度的改变
        if(w <= st) {
            w = st+1;//可以构造的话就让当前的数字越小越好
            if(abs(w - a[i]) > mid)//如果连最小的需求都无法满足则返回
                return false;
        }
        st = w;
    }
    return true;
}
int main() {

    //测试组数
    int t;
    cin >> t;

    int caseNUm = 1;

    while(t--) {

        //读入序列 A 的长度
        cin >> n;

        //读入元素值
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int l = 0, r = n, res = -1, mid;
        while(l <= r) {
            mid = (l + r) / 2;
            if(check(mid)) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << "Case #" << caseNUm++ << ":" << endl << res;
    }
    return 0;
}
