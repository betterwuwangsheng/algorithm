#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int num;
int main() {
    while (scanf("%d", &num) && num) {
        v.push_back(num);
    }

    for (int i = v.size() - 1; i >= 0; ++i) {
        printf("%d ", v[i]);
    }
    return 0;
}