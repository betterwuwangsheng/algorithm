#include <bits/stdc++.h>

using namespace std;

bool cmp(string x, string y){
    return x < y;
}
int main() {
    int n;
    cin >> n;

    vector<string> vt;
    while(n--) {
        string add;
        cin >> add;

        if(add.substr(0,5) == "http:")
            vt.push_back(add);
    }

    sort(vt.begin(), vt.end(), cmp);

    for(int i = 0; i < vt.size(); ++i)
        cout << vt[i] << endl;
    return 0;
}
