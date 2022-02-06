#include <algorithm>
#include <iostream>

using namespace std;

int A[10010];

int main() {
    int sum = 0, n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &A[i]), sum += A[i];

    sort(A, A + n, less<int>());
    printf("%d\n%d\n%d", A[n - 1], A[0], sum);

    return 0;
}