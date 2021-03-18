#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int sum = 0;
        for(int i = 0; i < n; ++i) {
            int num;
            scanf("%d", &num);

            //集合中所有元素之和
            sum += num;
        }

        //所有元素之和会重复出现 (n - 1)次
        sum *= pow(2, n - 1);
        printf("%d\n", sum);
    }
    return 0;
}
