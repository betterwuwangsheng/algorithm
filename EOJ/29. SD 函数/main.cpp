#include <bits/stdc++.h>

using namespace std;

//********** Specification of SD **********
void SD(int a, int b, int* p) {
    p[0] = a + b;
    p[1] = a - b;
}

/***************************************************************/
int main() {
    int a, b, p[2];
    scanf("%d%d", &a, &b);
    SD(a, b, p);
    printf("%d %d\n", p[0], p[1]);
    return 0;
}
