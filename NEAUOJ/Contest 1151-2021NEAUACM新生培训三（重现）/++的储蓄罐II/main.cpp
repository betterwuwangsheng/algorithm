#include <iostream>
#include <map>

using namespace std;

int t, n, ai;

map<int, int> mp;

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);

        while (n--) {
            scanf("%d", &ai);

            // 这样赋值
            mp[ai]++;
        }
        int size = mp.size();
        printf("%d\n", size);
        for (auto m : mp)
            // 访问
            cout << m.first << " " << m.second << endl;
        // 清空集合
        mp.clear();
    }
    return 0;
}
