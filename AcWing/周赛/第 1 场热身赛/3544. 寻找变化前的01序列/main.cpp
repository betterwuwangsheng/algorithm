#include <iostream>
#include <vector>

using namespace std;

vector<char> v;
int n, cnt;
string s;

int main() {
    scanf("%d", &n);
    cnt = 1;
    while (n--) {
        cin >> s;

        
        ++cnt;
        v.push_back(c);

        if (cnt % 5 == 0)
            v.push_back('0');

        for (auto ele : v)
            cout << ele;
    }
    return 0;
}