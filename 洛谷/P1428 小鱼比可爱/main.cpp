#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
int a[MAXN];
int ans[MAXN];

int main() {
    int n;
    cin >> n;

    //读入
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    //遍历
    for (int i = 1; i <= n; i++)

        //从第 i 个位置倒着往前找
        for (int j = i; j >= 1; j--) {
            //找到比第 i 条丑的
            if (a[j] < a[i])
                ans[i]++;
        }
    //输出
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    return 0;
}