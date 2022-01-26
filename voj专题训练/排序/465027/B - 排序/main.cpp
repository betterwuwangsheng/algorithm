#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, num;
int main() {
    scanf("%d", &n);

    vector<int> res;
    while (n--) {
        scanf("%d", &num);
        res.push_back(num);
    }

    sort(res.begin(), res.end());

    vector<int>::iterator it;
    for (it = res.begin(); it != res.end(); ++it)
        printf("%d ", *it);
    return 0;
}