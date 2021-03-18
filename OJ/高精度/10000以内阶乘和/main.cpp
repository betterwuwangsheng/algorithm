#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int a[MAXN] ={1, 1}; //a[0] -> 高次方结果的长度 , a[1] = 1 -> 乘法
int sum[MAXN] = {1}; //sum[0] 代表结果和的长度

void add() {//求和
    if(a[0] > sum[0])
        sum[0] = a[0];

    int c = 0;//进位
    for(int i = 1; i <= sum[0]; ++i) {
        sum[i] = sum[i] + a[i] + c;
        c = sum[i] / 10;
        sum[i] %= 10;
    }

    if(c) {
        sum[++sum[0]] = c;
    }
}
void fact(int n) {//求阶乘

    int c = 0;//进位
    for(int i = 1; i <= a[0]; ++i) {
        a[i] = a[i] * n + c; //阶乘
        c = a[i] / 10; // c = 0 or c = 1; -> 获得高位
        a[i] %= 10; //低位
    }

    //判断每一次乘以 2 后是否有进位(可能进很多位)
    while(c) {
        a[++a[0]] = c % 10;
        c /= 10;
    }
}

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        fact(i);
        add();
    }

    for(int i = sum[0]; i >= 1; --i)
        cout << sum[i];
    return 0;
}
