#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    getline(cin, str);


    for(int i = 0; i < str.size(); i++){
        str[i] = toupper(str[i]);
    }
    cout << str << endl;
    return 0;
}
