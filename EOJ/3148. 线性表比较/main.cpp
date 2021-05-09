#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;
    cin >> m >> n;
    vector<int> vtm; // vector 自带比较功能
    while(m--) {
        int num;
        cin >> num;
        vtm.push_back(num);
    }

    vector<int> vtn;
    while(n--) {
        int num;
        cin >> num;
        vtn.push_back(num);
    }

    if(vtm < vtn) {
        cout << -1 << endl;
    } else if(vtm == vtn)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    return 0;
}
