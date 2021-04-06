#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--) {
        int A, B;
        cin >> A >> B;

        //可以买的粽子数量
        int t = A / B;

        //买 3 个送 1 个
        if(t % 3 == 0 ) {
            t += 1;
        } else if(t % 5 == 0) {
            t += 2;
        }

        cout << t << endl;
    }
    return 0;
}
