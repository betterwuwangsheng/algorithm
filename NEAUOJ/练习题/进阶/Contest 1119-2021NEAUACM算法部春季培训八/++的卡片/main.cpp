#include <iostream>
#include <string>

using namespace std;

int n;
string s, t;
int main() {
    scanf("%d", &n);

    while (n--) {
        cin >> s;

        // 暂存 s
        t = s;

        // 记录位置
        int pos = 0, cnt1 = 0, cnt2 = 0;

        // 找到 qi 的位置
        ;

        // 位置可能是 0
        while ((pos = s.find("qi")) != -1) {
            // 删除
            s.erase(pos, 2);
            ++cnt1;
        }

        int len = t.size();

        for (int i = 0; i < len; ++i) {
            if (t[i] == 'q' && t[i + 1] == 'i') {
                ++cnt2;
                // 删去 -> 这里不需要向前移动 -> 置零
                t[i] = 0;
                t[i + 1] = 0;
            }
        }

        cout << cnt1 << " " << cnt2 << endl;
    }
    return 0;
}