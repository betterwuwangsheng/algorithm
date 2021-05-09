#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;

    while(cin >> c) {

        //默认有序,并且唯一
        set<int> s;

        int num;
        while (cin >> num)
            s.insert(num);

        auto i1 = s.begin();
        auto i2 = s.rbegin();
        if (c == 'A') {

            //升序 -> 正向迭代
            cout << *(i1++);
            while (i1 != s.end())
                cout << ' ' << *(i1++);
        } else {

            //降序 -> 反向迭代
            cout << *(i2++);
            while (i2 != s.rend())
                cout << ' ' << *(i2++);
        }
    }
    return 0;
}
