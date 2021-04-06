#include <bits/stdc++.h>

using namespace std;
#define MAX 1000
typedef struct {
    int x, y, z;
} Point;

//********** Specification of NearPoints **********
int NearPoints(Point* p, int n)
/* PreCondition: p 指向一个点的数组，n 是范围为 2-100 的点的个数
    PostCondition: 返回距离原点小于 100 的点的个数
*/
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (abs(p[i].x) >= 100 || abs(p[i].y) >= 100 || abs(p[i].z) >= 100)
            continue;
        else if (p[i].x * p[i].x + p[i].y * p[i].y + p[i].z * p[i].z < 10000)
            sum++;
    }
    return sum;
}

/***************************************************************/
int main() {
    int n, i;
    Point p[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d%d%d", &p[i].x, &p[i].y, &p[i].z);
    printf("%d\n", NearPoints(p, n));
    return 0;
}
