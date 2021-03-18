#include <bits/stdc++.h>

using namespace std;

const int MAX_LEN = 1e5 + 10;
int a[MAX_LEN];

int main() {
    int N;
    scanf("%d", &N);


    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, a + N);
    int T, num;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d", &num);
        printf("%d\n", a[num - 1]);
    }

    return 0;
}
