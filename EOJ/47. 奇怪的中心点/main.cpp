#include <bits/stdc++.h>

using namespace std;

#define eps 1e-8
struct p {
    int x, y, z;
} dat[105];
int n;
bool cmp(int ax, int ay, int az, int bx, int by, int bz) {
    if (ax != bx)
        return ax < bx;
    else if (ay != by)
        return ay < by;
    return az < bz;
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d%d", &dat[i].x, &dat[i].y, &dat[i].z);
    }
    long double dis = 1e20;
    int ax, ay, az;
    for (int i = -50; i <= 50; ++i) {
        for (int j = -50; j <= 50; ++j) {
            for (int k = -50; k <= 50; ++k) {
                long double t = 0;
                for (int x = 0; x < n; ++x) {
                    int dx = i - dat[x].x, dy = j - dat[x].y, dz = k - dat[x].z;
                    t += sqrt(dx * dx + dy * dy + dz * dz);
                }
                if ((t + eps < dis) ||
                    (fabs(t - dis) <= eps && cmp(i, j, k, ax, ay, az))) {
                    dis = t;
                    ax = i;
                    ay = j;
                    az = k;
                }
            }
        }
    }
    printf("%d %d %d\n", ax, ay, az);
    return 0;
}