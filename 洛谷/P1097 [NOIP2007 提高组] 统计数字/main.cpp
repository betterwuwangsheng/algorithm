#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;  //��Ȼ������
    scanf("%d", &n);

    map<ll, int> mp;  //��¼���ּ�����ִ���
    set<ll> st;       //����
    for (int i = 0; i < n; ++i) {
        ll num;
        scanf("%lld", &num);  //��������
        mp[num]++;            //��������
        st.insert(num);       //�򼯺��м�������
    }

    set<ll>::iterator it;
    for (it = st.begin(); it != st.end(); ++it)
        printf("%lld %d\n", *it, mp[*it]);
    return 0;
}