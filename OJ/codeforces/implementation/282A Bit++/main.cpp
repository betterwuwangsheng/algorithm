#include <iostream>

using namespace std;

int main() {
    int n, k = 0;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s[1] == '+')
            k++;
        else
            k--;
    }
    cout << k;
    return 0;
}
