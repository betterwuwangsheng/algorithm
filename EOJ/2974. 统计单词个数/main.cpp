#include <bits/stdc++.h>

using namespace std;

string exclude[6]= {"the","a","an","of","for","and"};

bool check(string s) {
    return (s == exclude[0] || s == exclude[1] || s == exclude[2] || s == exclude[3] || s == exclude[4] || s == exclude[5]);
}

int main() {

    int n, cnt;
    cin >> n;

    for(int i = 0; i < n; i++) {

        cnt = 0;
        string s;
        do {//do while 实现边读边判断
            cin >> s;

            for(int j = 0; j < s.size(); j++)//转小写
                s[j] = tolower(s[j]);
            if(check(s)) //相同 -> 跳出本层循环
                continue;
            cnt++; //单词数量增加
        } while(getchar() != '\n'); //读到回车符号结束
        printf("case #%d:\n%d\n", i, cnt);
    }
    return 0;
}
