#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    //输出的数字
    int num = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            num++;

            //小于 10 输出 0X
            if (num < 10)
                cout << "0" + to_string(num);
            else
                //否则直接输出数字
                cout << num;
        }
        cout << endl;
    }
    return 0;
}