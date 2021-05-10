#include <bits/stdc++.h>

using namespace std;

bool check(int val) {
    if(val >= 0 && val <= 255)
        return true;
    return false;
}
int main() {

    int n;
    scanf("%d", &n);

    int caseNum = 0;
    while(n--) {
        int a, b, c, d;
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);

        printf("case #%d:\n", caseNum++);
        if(check(a) && check(b) && check(c) && check(d)) {
            printf("Yes\n");
        } else if(!check(a))
            printf("No %d %d\n", 0, a);
        else if(!check(b))
            printf("No %d %d\n", 1, b);
        else if(!check(c))
            printf("No %d %d\n", 2, c);
        else
            printf("No %d %d\n", 3, d);
    }
    return 0;
}
