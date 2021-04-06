#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        getline(cin, s);
        int len = s.length();
        int character = 0, number = 0, others = 0;

        //遍历
        for(int i = 0; i < len; i++) {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                character++;
            else if(s[i] >= '0' && s[i] <= '9')
                number++;
            else
                others++;
        }
        printf("character:%d\nnumber:%d\nothers:%d\n", character, number, others);
    }
    return 0;
}
