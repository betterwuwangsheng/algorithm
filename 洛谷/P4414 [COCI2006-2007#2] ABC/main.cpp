#include <bits/stdc++.h>

using namespace std;

int main() {
    int num[3];
    cin >> num[0] >> num[1] >> num[2];

    //排序
    sort(num, num + 3);

    char A, B, C;
    cin >> A >> B >> C;

    //输出对应位置上的数字
    cout << num[A - 'A'] << " " << num[B - 'A'] << " " << num[C - 'A'];
    return 0;
}
