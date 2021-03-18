#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793238462643383279502884197169399375105820;
int main() {
    int T;
    cin >> T;

    int k = 0;
    while(T--) {
        double N, K;
        cin >> N >> K;

        double s = 0;
        for(int i = 0; i < K; i++){
            s += N * N - PI * N * N / 4;
            N *= sqrt(2) / 2;

        }
        printf("case #%d:\n", k++);
        cout << fixed << setprecision(6) << s << endl;
    }
    return 0;
}
