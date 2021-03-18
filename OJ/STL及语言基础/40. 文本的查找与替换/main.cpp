#include <bits/stdc++.h>

using namespace std;

int main() {

    string source, search, replace;
    getline(cin, source);
    cin >> search >> replace;

    int len = search.length();
    while(1) {
        int pos = source.find(search);
        //未找到
        if(pos == -1)
            break;
        source.replace(pos, len, replace);
    }
    cout << source << endl;
    return 0;
}
