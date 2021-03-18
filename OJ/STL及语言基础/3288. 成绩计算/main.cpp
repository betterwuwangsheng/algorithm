#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    while (scanf("%d", &T) != EOF) {
        for (int i = 0; i < T; i++) {
            int highest = 0;
            int lowest = INT_MAX;
            int sum = 0;
            int cnt = 0;
            int num;
            while (scanf("%d", &num) != EOF) {
                if (num == -1)
                    break;
                cnt++;
                highest = max(num, highest);
                lowest = min(num, lowest);
                sum += num;
            }
            int avg = sum / cnt;
            printf("case #%d:\n%d\n%d\n%d\n", i, highest, lowest, avg);
        }
    }
    return 0;
}
