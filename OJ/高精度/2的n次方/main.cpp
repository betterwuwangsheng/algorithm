#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int a[MAXN]; //a[0] -> 高次方结果的长度 , a[1] = 1 -> 乘法
void solve(int n) {
    a[0] = a[1] = 1;

    for(int i = 1; i <= n; ++i) {//计算 2 的 n 次方,每次乘以一个 2
        int c = 0;//各个位乘以2时的进位。每一轮开始前要清空
        for(int j = 1; j <= a[0]; ++j) { //每一位数字乘以相同的数字
            a[j] = a[j] * 2 + c; // 每一位数字 * 2  + 进位的结果(并不直接保存 -> 只留下低位)
            c = a[j] / 10; // c = 0 or c = 1; -> 获得高位 -> 实际进位
            a[j] %= 10; //低位(留下的数字)
        }

        //判断每一次乘以 2 后是否有进位
        if(c)
            a[++a[0]] = c; //有进位 -> 结果长度增加 -> 对应位置赋值为进位
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
        for(int i = a[0]; i >= 1; --i)
            cout << a[i];
        printf("\n");
    }
    return 0;
}
