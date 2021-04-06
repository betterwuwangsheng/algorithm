#include <bits/stdc++.h>

using namespace std;

#define g 9.8

int main() {
    int n;
    while(scanf("%d", &n)) {
        if(n == 0)
            break;
        double h;
        //鎵斾笅鏃堕珮搴�
        //绗竴鍜岀浜屽眰楂樹负 5 绫�
        //鍏跺畠鍚勫眰楂� 3 绫�
        if(n >= 1 && n <= 3) {
            h = 1.75 + 5 * (n - 1);
        } else {
            h = 11.75 + 3 * (n - 3);
        }

        double time = sqrt(2 * h / g);

        cout << fixed << setprecision(3) << time << endl;
    }
    return 0;
}
