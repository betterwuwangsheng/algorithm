#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> st;
    for (int i = 0; i < s.length(); ++i)
        st.insert(s[i]);

    if (st.size() & 1)  //���� -> ���� ->
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}
