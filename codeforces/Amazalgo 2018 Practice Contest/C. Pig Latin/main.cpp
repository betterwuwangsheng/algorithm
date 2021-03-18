#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string word, ans;
        int flag = 1;//标记是否为第一个单词
        do {
            cin >> word;
            word[0] = tolower(word[0]);//首字母大写
            ans = word.substr(1, word.length() - 1) + word[0] + "ay";//加密
            if (flag)//是首个单词
                ans[0] = toupper(ans[0]);//大写
            cout << ans << " ";
            flag = 0;//改变标记
        } while (getchar() != '\n');
        cout << endl;
    }
    return 0;
}
