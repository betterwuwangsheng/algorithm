#include <algorithm>
#include <iostream>

using namespace std;

const int MX = 310;

struct STUDENT {
    int id;
    int yw;
    int sx;
    int yy;
    int total;
} student[MX];

bool cmp(STUDENT s1, STUDENT s2) {
    if (s1.total == s2.total)
        if (s1.yw == s2.yw)
            return s1.id < s2.id;
        else
            return s1.yw > s2.yw;
    return s1.total > s2.total;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        student[i].id = i + 1;
        scanf("%d%d%d", &student[i].yw, &student[i].sx, &student[i].yy);
        student[i].total = student[i].yw + student[i].sx + student[i].yy;
    }
    sort(student, student + n, cmp);

    for (int i = 0; i < 5; ++i)
        printf("%d %d\n", student[i].id, student[i].total);

    return 0;
}