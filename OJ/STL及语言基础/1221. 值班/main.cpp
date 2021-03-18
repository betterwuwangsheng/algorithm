#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    map<int, int> m;
    while (scanf("%d", &N) != EOF) {
        int cnt = 0;
        while (N--) {
            int day;
            while (scanf("%d", &day) != EOF) {
                if (day == -1)
                    break;
                m[day]++;
            }
        }

        map<int, int>::iterator it;
        for (it = m.begin(); it != m.end(); it++) {
            if (it->second >= 1) {
                cnt++;
            }
        }
        if (cnt == 30) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}
