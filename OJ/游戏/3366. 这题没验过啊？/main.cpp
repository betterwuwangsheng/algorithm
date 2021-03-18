#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    //n 除以 11 的余数为 0 或 10 时后手必胜，否则先手必胜
    if(n % 11 == 0 || n % 11 == 10)
        printf("ultmaster\n");
    else
        printf("infiniteee\n");
    return 0;
}
