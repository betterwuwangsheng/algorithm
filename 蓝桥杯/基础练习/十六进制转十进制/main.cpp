#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

typedef long long LL;

string value;
int main() {
    cin >> value;

    // 翻转
    reverse(value.begin(), value.end());
    int len = value.size();
    LL sum = 0;
    int t;
    for (int i = 0; i < len; ++i) {
        // 判断是否为字母 A-F
        if (value[i] >= 'A' && value[i] <= 'F')
            // 将字母换成对应数字 +10 很重要
            t = value[i] - 'A' + 10;
        else
            t = value[i] - '0';
        sum += t * pow(16, i);
    }
    printf("%lld\n", sum);
    return 0;
}