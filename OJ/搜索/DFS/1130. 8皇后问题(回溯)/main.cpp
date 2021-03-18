#include <bits/stdc++.h>

using namespace std;

int n, cnt = 0;

//列
int col[20];

//左上到右下 (同一斜)差一样
int u[40];

//右上 到左下 -> (同一斜)行列相加相等
int v[40];

//记录行号
int a[20];

//深搜与回溯
void dfs(int x) {//深搜

    //递归出口
    if(x > n) {

        //计数增加
        cnt++; //每搜到底一次就
        return ;
    }
    for(int i = 1; i <= n; ++i) {    //行

        //列未被访问,斜未被访问 x - i 可能越界 -3 -> -3 + 8 = 5
        if(!col[i] && !u[x - i + n] && !v[x + i]) {

            //标记
            col[i] = 1;
            u[x - i + n] = 1;
            v[x + i] = 1;

            //记录行号
            a[x] = i;

            //递归深搜 -> 传入的数据 + 1
            dfs(x + 1);

            //回溯
            col[i] = 0;
            u[x - i + n] = 0;
            v[x + i] = 0;
        }
    }
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        cin >> n;
        cnt = 0;//清零
        dfs(1);
        cout << cnt << endl;
    }
    return 0;
}
