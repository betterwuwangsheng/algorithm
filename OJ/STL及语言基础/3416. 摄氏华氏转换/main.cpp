#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    int len = s.size();

    if(s[len - 1] == 'f') {
        s[len - 1] = '\0';

        double num = stoi(s);
        printf("%.2fc\n", (num - 32) * 5 / 9);
    } else {
        s[len - 1] = '\0';

        double num = stoi(s);
        printf("%.2ff\n",  (num * 9 / 5) + 32);
    }

    return 0;
}
