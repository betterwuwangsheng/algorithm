#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
    while(cin >> n) {


        vector<int> vt_odd;
        vector<int> vt_even;

        while(n--) {
            int num;
            cin >> num;

            ///奇数
            if(num % 2 == 1) {
                vt_odd.push_back(num);
            }

            ///偶数
            if(num % 2 == 0) {
                vt_even.push_back(num);
            }
        }

        double sum = 0;
        vector<int>::iterator it;
        if(vt_odd.size() == 0) {
            printf("None ");
        } else {
            for(it = vt_odd.begin(); it != vt_odd.end(); it++) {
                sum += (*it);
            }
            printf("%.3lf ", sum / vt_odd.size());
        }
        sum = 0;
        vector<int>::iterator it2;
        if(vt_even.size() == 0) {
            printf("None ");

        } else {
            for(it2 = vt_even.begin(); it2 != vt_even.end(); it2++) {
                sum += (*it2);
            }
            printf("%.3lf ", sum / vt_even.size());
        }
        cout << endl;
    }
    return 0;
}
