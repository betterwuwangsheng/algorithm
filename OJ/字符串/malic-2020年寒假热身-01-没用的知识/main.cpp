#include <bits/stdc++.h>

using namespace std;

bool check(int a) {
    set<int> st;

    while(a != 0) {
        st.insert(a % 10);
        a /= 10;
    }

    if(st.size() == 4)
        return true;
    return false;
}
int main() {

    int y;
    cin >> y;

    y++;
    while(!check(y))
        y++;
    cout << y << endl;
    return 0;
}
