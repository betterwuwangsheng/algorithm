#include <bits/stdc++.h>

using namespace std;

//比较
bool cmp(string s1, string s2) {

    //获取长度
    int len1 = s1.length();
    int len2 = s2.length();
    int cnt_1 = 0;
    int cnt_2 = 0;

    for(int i = 0; i < len1; i++) {

        //是数字
        if(isdigit(s1[i]))
            cnt_1++;
    }

    for(int i = 0; i < len2; i++) {
        if(isdigit(s2[i]))
            cnt_2++;
    }

    //数字个数相同
    if(cnt_1 == cnt_2)

        //字符串长度从大到小排序
        return len1 > len2;

    //长度也相同
    else if(cnt_1 == cnt_2 && len1 == len2)

        //按照字符串本身的字典序排序
        return s1 < s2;
    //数字字符个数从少到多排序
    return cnt_1 < cnt_2;
}
int main() {
    int n;
    cin >> n;
    vector<string> vt;

    getchar();
    while(n--) {
        string s;
        getline(cin, s);

        vt.push_back(s);
    }

    sort(vt.begin(), vt.end(), cmp);

    /**
        for(auto i:v)使用C++11新特性循环遍历v，如果需要改变i的值，还需要在前面加上 &
        cout<<i<<" ";
    */
    for(auto  &v : vt)
        cout << v << endl;
    return 0;
}
