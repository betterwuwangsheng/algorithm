#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, leave, enter, sum = 0;
    cin >> n;

    int minn = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> leave >> enter;

        //上下车人数
        sum = sum - leave + enter;
        if (sum > minn)
            minn = sum;
    };
    cout << minn << endl;
    return 0;
}