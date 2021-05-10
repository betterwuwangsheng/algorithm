#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int a[MAXN]; //a[0] -> 高次方结果的长度 , a[1] = 1 -> 乘法
void solve(int n) {
    a[0] = a[1] = 1;

    for(int i = 1; i <= n; ++i) {//求 n!
        int c = 0;//进位
        for(int j = 1; j <= a[0]; ++j) {//每一位数字乘以相同的数字
            a[j] = a[j] * i + c; //阶乘 -> 每一次都 * i
            c = a[j] / 10; //  获得高位
            a[j] %= 10; //低位
        }

        //判断每一次乘以 2 后是否有进位(可能进很多位)
        while(c) {
            a[++a[0]] = c % 10;//保存各个进位
            c /= 10;
        }
    }
}
int main() {
    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        int n;
        cin >> n;

        solve(n);

        printf("case #%d:\n", caseNum++);

        //倒序输出
        int cnt = 0;
        for(int i = 1; i <= a[0]; ++i) {
            if(a[i] == 0)
                cnt++;
            else
                break;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
