#include <bits/stdc++.h>

using namespace std;

int main() {
    double d, p, r;
    int res;
    while(cin >> d >> p >> r) {
        double t = log10(p / (p - d * r * 0.01)) / log10(1 + r * 0.01) + 0.5;
            if(int(t) > t)
           res = ceil(t);
        else
            res = floor(t);
        printf("%d\n", res);
    }
    return 0;
}
