#include <bits/stdc++.h>

using namespace std;

//获取每个数字中 2 的数量
int getNumber2(int num) {
    int cnt = 0;
    while (num) {
        int temp = num % 10;
        if (temp == 2)
            cnt++;
        num /= 10;
    }
    return cnt;
}
int main() {
    int begin, end;
    scanf("%d%d", &begin, &end);

    int cnt = 0;
    for (int i = begin; i <= end; ++i)
        cnt += getNumber2(i);
    printf("%d", cnt);
    return 0;
}