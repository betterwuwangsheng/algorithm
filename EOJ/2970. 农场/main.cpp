#include <bits/stdc++.h>

using namespace std;

int main() {

    int T,i;
    cin >> T;
    int k = 0;

    while(T--) {
        printf("case #%d:\n", k++);

        int N, M, flag=0;
        cin >> N >> M;

        int chicken, sheep;
        for (chicken = 0; chicken <= N; chicken++) {
            sheep = N - chicken;
            if (2 * chicken + 4 * sheep == M) {
                printf("%d %d\n", chicken, sheep);
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("Impossible\n");
    }
    return 0;
}
