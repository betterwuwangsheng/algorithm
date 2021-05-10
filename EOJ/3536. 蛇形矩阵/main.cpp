#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;
const int dir[4][2] = {1, 0, 0, 1, 0, -1, -1, 0};

ll T, n, m, cases;

int main() {
    std::ios::sync_with_stdio(false);
    cin >> n;
    if (n & 1) { //奇数的时候
        ll a1 = (n + 1) * n / 2;//求出第一行
        cout << a1 << endl;
        ll a = 4 * n - 5, b = n - 1;//a,b初始值
        int i;
        for (i = 2; i <= (n + 1) / 2; i++) { //前半部分输出
            a1 = a1 + 1 + a * b;
            a -= 8;
            b -= 2;
            cout << a1 << endl;
        }
        a = 3, b = 1;
        for (; i <= n; i++) { //后半部分输出
            a1 = a1 - a * b;
            cout << a1 << endl;
            a += 8;
            b += 2;
        }
    } else { //n为偶数
        ll a1 = (n + 1) * n / 2;//输出第一个
        cout << a1 << endl;
        ll a = 4 * n - 5, b = n - 1;
        int i;
        for (i = 2; i <= (n + 1) / 2; i++) { //前半部分和之前一样的规律
            a1 = a1 + 1 + a * b;
            a -= 8;
            b -= 2;
            cout << a1 << endl;
        }
        a1 += 4;
        cout << a1 << endl;//中间的特殊规律
        a = 2, b = 7;
        i++;//这里i++保证输出正好n行
        for (; i <= n; i++) { //后半部分输出
            a1 = a1 - a * b;
            a += 2;
            b += 8;
            cout << a1 << endl;
        }
    }
    return 0;
}
