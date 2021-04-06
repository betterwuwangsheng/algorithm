#include <bits/stdc++.h>

using namespace std;

int main() {
    int year, month, day;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //获取带符号的输入 "%d-%d-", &num....
    while (scanf("%d-%d-%d", &year, &month, &day) != EOF) {
        int sum = day;
        if (month > 0 && month <= 12 && day > 0 && day <= a[month]) {
            for (int i = 0; i < month; i++)
                sum += a[i];
            printf("%d\n", sum);
        } else
            printf("-1\n");
    }
    return 0;
}
