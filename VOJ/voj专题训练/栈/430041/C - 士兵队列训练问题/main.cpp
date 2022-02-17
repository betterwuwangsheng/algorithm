#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, num;

vector<int> v;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        for (int i = 1; i <= num; ++i)
            v.push_back(i);

        vector<int>::iterator it;

        int i = 1;
        for (it = v.begin(); it != v.end(); ++it) {
            if (i > 3)
                i = 1;
            if (i % 3 == 0) {
                v.erase(it);
            }
            ++i;
        }

        // 遍历
        for (int i = 0; i < 3; ++i)
            printf("%d ", v[i]);
        puts("");
    }
    return 0;
}