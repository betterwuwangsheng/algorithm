#include <iostream>
#include <string>

using namespace std;

string s;
int main() {
    cin >> s;
    int len = s.size();
    char a = s[len - 3], b = s[len - 2], c = s[len - 1];
    if (b == 'e' && c == 'r' || b == 'l' && c == 'y') {
        s.erase(len - 2, len);
    } else if (a == 'i' && b == 'n' && c == 'g') {
        s.erase(len - 3, len);
    }
    cout << s;
    return 0;
}