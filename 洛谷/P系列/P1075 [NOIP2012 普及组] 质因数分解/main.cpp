#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    //遍历
    for (int i = 2; i * i <= n; ++i)

        //能被整除
        if (n % i == 0)
            //输出大的
            cout << n / i << endl;
}