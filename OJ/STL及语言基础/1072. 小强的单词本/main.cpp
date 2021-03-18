#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    //由于出现去重 -> 使用 set 集合更加方便
    set<string> s;
    string a;

    for(int i = 1; i <= N; i++) {
        cin >> a;
        s.insert(a);

    }
    //set 默认升序
    set<string>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << endl;
    return 0;
}
