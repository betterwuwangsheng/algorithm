#include <bits/stdc++.h>

using namespace std;

set<string> st;

int main() {

    string s, temp;
    getline(cin, s);

    istringstream ss(s);
    
    while (ss >> temp) {
        if (islower(temp[0]))
            temp[0] = temp[0] - 32;
        st.insert(temp);
    }
    for (set<string>::iterator it = st.begin(); it != st.end(); it++) {
        temp = *it;
        cout << temp[0] << ":" << temp << endl;
    }
    return 0;
}
