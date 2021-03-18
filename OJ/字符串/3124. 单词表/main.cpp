#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >>t;
    getchar();

    for (int c = 0; c < t; c++) {
        string s, tmp;
        getline(cin, s);

        for (int i = 0; i < s.length(); ++i)
            if (!isalpha(s[i])) //不是英文字母
                s[i] = ' ';

        //stringstream 输入、输出和输入输出
        stringstream input(s);

        set<string> ans;
        while (input >> tmp)
            ans.insert(tmp);

        auto x = ans.begin();

        cout << "case #" << c << ":\n" << *x;
        while (++x != ans.end())
            cout << ' ' << *x;
        cout << endl;
    }
}
