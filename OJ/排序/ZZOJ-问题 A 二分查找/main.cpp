#include<cstdio>

using namespace std;

const int MAXN = 1e5;
int a[MAXN];

int binarySearch(int A[],int left, int right, int x) {
    int mid;
    while(left <= right) {
        mid = (left + right) / 2;
        if(A[mid] == x) {
            return mid;
        } else if(A[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}
int main() {

    int n;
    while(scanf("%d", &n)!=EOF) {
        for(int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }

        int x;
        scanf("%d", &x);

        printf("%d\n", binarySearch(a, 1, n, x));
    }
    return 0;
}
