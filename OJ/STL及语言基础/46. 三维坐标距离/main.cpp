#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int x, y, z;
} Point;

double Distance(Point a, Point b)
/* PreCondition:
     a,b 点的每维坐标值范围为 -100 ~ +100
   PostCondition:
     返回 a,b 点之间的距离
*/
{
    double x = abs(a.x - b.x) * abs(a.x - b.x);
    double y = abs(a.y - b.y) * abs(a.y - b.y);
    double z = abs(a.z - b.z) * abs(a.z - b.z);
    double d = sqrt(x + y + z);
    return d;
}

int main() {
    Point a, b;
    scanf("%d%d%d", &a.x, &a.y, &a.z);
    scanf("%d%d%d", &b.x, &b.y, &b.z);
    printf("%.9f\n", Distance(a, b));
    return 0;
}
