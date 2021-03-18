#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    while(scanf("%d%d%d", &a, &b, &c) != EOF) {

        int t = b * b - 4 * a * c;
        double r1, r2;

        //有两个不等的实根
        if(t > 0) {
            r1 = (-b + sqrt(t))  / (2 * a);
            r2 = (-b - sqrt(t))  / (2 * a);

            if(r1 > r2){
                double temp = r1;
                r1 = r2;
                r2 = temp;
            }
            printf("%.6f %.6f\n", r1, r2);
        } else if(t == 0) {
            r1 = (-b) / (2 * a);
            printf("%.6f\n", r1);
        }
    }
    return 0;
}
