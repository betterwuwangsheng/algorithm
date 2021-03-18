#include <bits/stdc++.h>

using namespace std;

const int MX = 1e6 + 10;
int N;
int num[MX];
int main() {

    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        scanf("%d", &num[i]);
    }
    sort(num + 1, num + 1 + N);

    for(int i = 1; i <= N; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}
