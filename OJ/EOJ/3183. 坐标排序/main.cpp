#include <bits/stdc++.h>

using namespace std;

#define N 100
typedef struct {
    int x, y;
} Point;

int check(Point p) {
    if (p.x >= 0 && p.y >= 0)
        return 1;
    else if (p.x < 0 && p.y >= 0)
        return 2;
    else if (p.x <= 0 && p.y < 0)
        return 3;
    else
        return 4;
}

bool cmp(Point a, Point b) {
    //������ԭ��ľ���
    double disa = sqrt(a.x * a.x + a.y * a.y);
    double disb = sqrt(b.x * b.x + b.y * b.y);

    //���������ͬ����ͬһ�����ڣ�������ֵ x �ľ���ֵ��С��������
    if (disa == disb && check(a) == check(b))
        return abs(a.x) < abs(b.x);
    else if (disa == disb)
        return check(a) < check(b);

    //����ϵͳ�е���ԭ��֮��ľ����С��������
    return disa < disb;
}
void SortPoints(Point* p, int n)
/* PreCondition:
p points to an array with n coordinate points
PostCondition:
array is sorted satisfying to the specification
*/
{
    // TODO: your function definition
    sort(p, p + n, cmp);
}

int main() {
    Point a[N];
    int n, i, t, cas;
    scanf("%d", &cas);
    for (t = 0; t < cas; t++) {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d%d", &a[i].x, &a[i].y);
        /***** function SortPoints is called here *****/
        SortPoints(a, n);
        /****************************************/
        printf("case #%d:\n", t);
        for (i = 0; i < n; i++)
            printf("(%d,%d)%c", a[i].x, a[i].y, i < n - 1 ? ' ' : '\n');
    }
    return 0;
}
