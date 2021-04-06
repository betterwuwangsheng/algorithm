#include <bits/stdc++.h>

using namespace std;

void solve(char *s) {
    int len = strlen(s);

    char *p = s + len - 1;
    if (strchr(s, '.'))
        while (*p == '0')
            *p-- = 0;
    if (*p == '.') *p = 0;
}

int main(void) {
    char *pa, *pb;
    char a[501], b[501];
    while (cin >> a >> b) {
        pa = a;
        pb = b;
        while (*pa == '0')
            ++pa;
        while (*pb == '0')
            ++pb;
        solve(pa);
        solve(pb);
        puts(strcmp(pa, pb) ? "It isn't xiao qiang" : "It's xiao qiang");
    }
    return 0;
}
