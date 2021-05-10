#include <bits/stdc++.h>

using namespace std;

const int MAXN = 125;

int a[MAXN], b[MAXN];//保存中间结果
int ans[MAXN];//保存结果， len -> 结果初始长度为 1

int main() {

    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        int n;
        cin >> n;

        //将中间结果数组清零
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        a[1] = 1;
        b[1] = 1;
        int len = 1;
        if(n == 0)
            printf("case #%d:\n%d\n", caseNum++, n);
        else if(n == 1 || n == 2)
            printf("case #%d:\n1\n", caseNum++);
        else {
            for(int i = 3; i <= n; ++i) {
                memset(ans, 0, sizeof(ans)); //初始化结果数组
                for(int j = 1; j <= len; ++j) {//高精加法
                    ans[j] += a[j] + b[j];//竖式加法
                    ans[j + 1] += ans[j] / 10;//进位 -> 多位进位
                    ans[j] %= 10;//留下该位最终结果
                }

                if(ans[len + 1] > 0)
                    len++;

                //交换数组
                for(int index = 1; index <= len; ++index)
                    a[index] = b[index];
                for(int index = 1; index <= len; ++index)
                    b[index] = ans[index];
            }
            printf("case #%d:\n", caseNum++);

            //倒序输出
            for(int i = len; i >= 1; --i)
                cout << ans[i];
            cout << endl;
        }
    }
    return 0;
}
