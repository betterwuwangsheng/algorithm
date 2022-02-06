#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int n, num;
int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}