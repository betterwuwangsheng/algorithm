#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, k, num;
vector<int> v;

int main() {
    scanf("%d%d", &n, &k);

    while (n--) {
        scanf("%d", &num);
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    printf("%d", v[k]);
    return 0;
}