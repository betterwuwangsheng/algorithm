#include <algorithm>
#include <iostream>

using namespace std;

struct DATETIME {
    int m;
    int d;
    int y;
} date[1005];

bool cmp(DATETIME a, DATETIME b) {
    if (a.y == b.y)
        if (a.m == b.m)
            return a.d < b.d;
        else
            return a.m < b.m;
    return a.y < b.y;
}
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d/%d/%d", &date[i].m, &date[i].d, &date[i].y);
    }

    sort(date, date + n, cmp);

    for (int i = 0; i < n; ++i)
        printf("%02d/%02d/%04d\n", date[i].m, date[i].d, date[i].y);
    return 0;
}