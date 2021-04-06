#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;  //自然数个数
    scanf("%d", &n);

    map<ll, int> mp;  //记录数字及其出现次数
    set<ll> st;       //排序
    for (int i = 0; i < n; ++i) {
        ll num;
        scanf("%lld", &num);  //读入数字
        mp[num]++;            //数量增加
        st.insert(num);       //向集合中加入数字
    }

    set<ll>::iterator it;
    for (it = st.begin(); it != st.end(); ++it)
        printf("%lld %d\n", *it, mp[*it]);
    return 0;
}