#include <bits/stdc++.h>

using namespace std;

long long a[10000];

//递归版本 斐波那契数列 -> 数据量很大时容易超时
int fi(int n) {
    if(n == 1 || n == 2)
        return 1;
    return fi(n - 1) + fi(n - 2);
}


//非递归版本
void f() {
    a[1] = 1;
    a[2] = 1;
    for(long long i = 3; i <= 10000; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }
}
int main() {
    f();
    cout << a[20] << endl;
    cout << fi(20) << endl;
    return 0;
}
