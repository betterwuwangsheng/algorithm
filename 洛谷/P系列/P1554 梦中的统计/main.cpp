#include <bits/stdc++.h>

using namespace std;

//记录 0 - 9 出现的次数
int cnt[10] = {0};

//记录数字出现的次数
void count_num(int num) {
    while (num > 0) {
        //记录个位数字
        int index = num % 10;

        //对应数字出现次数增加
        cnt[index]++;

        //右移
        num /= 10;
    }
}
int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; ++i)
        count_num(i);

    for (int i = 0; i < 10; ++i)
        cout << cnt[i] << " ";
    return 0;
}