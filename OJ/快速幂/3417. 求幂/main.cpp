#include <bits/stdc++.h>

using namespace std;

//������
long long int quick_pow(int a, int b) {

    // 0 �η� = 1
    if(b == 0)
        return 1;

    //1 �η� = ����
    else if(b == 1)
        return a;

    //��Ϊ����
    else if(b & 1) {

        //(n + n) + 1
        return a * quick_pow(a, b - 1);
    } else {

        //��Ϊż�� -> (n/2 + n/2)
        long long ans = quick_pow(a, b >> 1);
        return ans * ans;
    }
}
int main() {
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF) {
        printf("%lld\n", quick_pow(a, b));
    }
    return 0;
}
