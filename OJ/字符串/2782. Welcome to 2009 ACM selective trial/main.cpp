#include <bits/stdc++.h>

using namespace std;

int main() {

    //键值对集合
    //初始化键值对集合
    map<string, string> m = {
        {"E", "Excellent"},
        {"C", "Cheer"},
        {"N", "Nice"},
        {"U", "Ultimate"},
        {"Impossible", "I'm possible"},
        {"ACM", "Accept More"}
    };
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;

        for(auto it = m.begin(); it != m.end(); it++){
            if(it -> first == s){
                cout << it -> second << endl;
            }
        }
    }
    return 0;
}
