#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

const int MX = 35;

struct STUDENT {
    string name;
    int score;
} s[MX];

bool cmp(STUDENT s1, STUDENT s2) {
    if (s1.score == s2.score)
        return s1.name < s2.name;
    else
        return s1.score > s2.score;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i].name >> s[i].score;
    }

    sort(s, s + n, cmp);
    for (int i = 0; i < n; ++i)
        cout << s[i].name << " " << s[i].score << endl;
    return 0;
}