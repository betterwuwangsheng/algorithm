#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        if (s <= "07:45:00")
            printf("You are living a healthy life!\n");
        else if (s <= "07:50:00")
            printf("Hurry up!\n");
        else
            printf("You are late!\n");
    }
    return 0;
}
