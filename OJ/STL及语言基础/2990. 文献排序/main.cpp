#include <bits/stdc++.h>

using namespace std;

//将大写转换为小写
void lowerword(string& s) {
    for (int i = 0; i < (int)s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

//比较字符串大小
bool cmp(string s1, string s2) {
    //在排序时如果该字符串中包含大写字母，则当作小写字母处理
    lowerword(s1);
    lowerword(s2);
    return s1 < s2;
}
int main() {
    //问题数
    int T;
    scanf("%d", &T);

    //保存文献记录
    vector<string> vt;

    for (int i = 0; i < T; i++) {
        //文献记录数
        int n;
        scanf("%d", &n);

        //在 getline 前面加入 getchar() 吸收之前键盘输入的回车键
        getchar();
        //读入
        while (n--) {
            string s;
            getline(cin, s);

            //加入字符串动态数组
            vt.push_back(s);
        }

        //排序
        sort(vt.begin(), vt.end(), cmp);

        cout << "case #" << i << ":" << endl;
        for (auto v : vt)
            cout << v << endl;
        vt.clear();
    }
    return 0;
}
