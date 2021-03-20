#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;
int a[MAXN];
int main() {
    int n;
    cin >> n;
    int cnt = 1, maxx = 0;  //计数，最大值
   
    //读入数据
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        if (a[i] < a[i + 1])  //上升
            cnt++;            //数量增加
        else
            cnt = 1;            //重置
        maxx = max(maxx, cnt);  //获取最大
    }
    cout << maxx;
    return 0;
}
