#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, maxx = 0, day = 0;
    for (int i = 1; i <= 7; ++i) {
        scanf("%d%d", &a, &b);

        int time = a + b;  //一天的上课时间
        if (time > maxx) {
            maxx = time;  //更新最不高兴的一天
            day = i;      //记录是那一天
        }
    }
    printf("%d", day);
    return 0;
}