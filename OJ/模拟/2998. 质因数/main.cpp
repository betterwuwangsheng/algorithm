#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        unsigned n;
        cin >> n;
        for(unsigned j = 2; j <= n / 2; j++) {
            if(n % j == 0) {
                printf("case #%d:\n", i);
                cout << n / j << endl;
                break;
            }
        }
    }
    return 0;
}
