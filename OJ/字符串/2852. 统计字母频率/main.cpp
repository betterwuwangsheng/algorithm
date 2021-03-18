#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char,int> mp;
    set<char> st;

    //读入字符串
    string s;
    getline(cin,s);

    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {

        //记录字母及其频率
        if(s[i] != ' ') {
            cnt++;
            mp[s[i]]++;
        }
    }

    //初始化最大值
    int mx = 0;
    for(auto it = mp.begin(); it != mp.end(); it++) {

        //获取字母出现的最大频率
        int temp = it -> second;
        if(temp > mx)
            mx = temp;
    }

    //将字符加入 set 集合 -> 默认升序
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it -> second == mx) {
            st.insert(it -> first);
        }
    }

    auto it = st.begin();
    printf("%c %.2lf", *it, mp[*it] * 1.0 / cnt);
    return 0;
}
