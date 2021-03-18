#include <bits/stdc++.h>

using namespace std;

int main() {

    //读入排序规则
    char c;

    while(cin >> c) {
        vector<int> vt;

        //读入数据
        int num;
        while(cin >> num)
            vt.push_back(num);

        //升序
        sort(vt.begin(), vt.end());

        vt.erase(unique(vt.begin(), vt.end()), vt.end());

        if(c == 'A') {
            for(auto v : vt)
                cout << v << " ";
        } else {
            for(auto it = vt.rbegin(); it != vt.rend(); it++) {
                cout << *it << " ";
            }
        }

    }
    return 0;
}
