#include <bits/stdc++.h>

using namespace std;

double f(double n) {
    if(n == 1 || n == 0)
        return 1;
    return f(n - 1) * n;
}
int main() {

    double num;
    cin >> num;
    double sum = 0;
    for(int i = 1; i <= num; i++) {
        sum += f(i);
    }
    printf("%.0f", sum);
    return 0;
}
