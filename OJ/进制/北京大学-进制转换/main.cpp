#include <bits/stdc++.h>

using namespace std;

void Convert(int n, int x) {
    vector<int> res;
    while(n != 0) {
        res.push_back(n % x);
        n /= x;

    }
    //逆序输出
    for(int i = res.size() - 1; i >= 0; --i) {
        printf("%d", res[i]);
    }
    printf("\n");
}
int main() {
    unsigned int n;
    while(scanf("%d", &n) != EOF) {
        Convert(n, 2);
    }
    return 0;
}
