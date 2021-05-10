#include <bits/stdc++.h>

using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        return true;
    return false;
}
int main() {
    int start_year, end_year;
    cin >> start_year >> end_year;

    vector<int> res;
    for (int i = start_year; i <= end_year; ++i)
        if (isLeapYear(i)) {
            res.push_back(i);
        }
    cout << res.size() << endl;

    for (auto& y : res)
        cout << y << " ";
    return 0;
}