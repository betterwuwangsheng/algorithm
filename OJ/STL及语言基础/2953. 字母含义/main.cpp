#include <bits/stdc++.h>

using namespace std;

map<char, string> mp = {
    {'E', "Excellent"}, {'C', "Cheer"},  {'N', "Nice"},
    {'U', "Ultimate"},  {'A', "Accept"},
};
int main() {
    char c;
    while (cin >> c) {
        if (c == 'E' || c == 'C' || c == 'N' || c == 'U' || c == 'A')
            cout << mp[c] << endl;
        else
            cout << "Error\n" << endl;
    }
    return 0;
}
