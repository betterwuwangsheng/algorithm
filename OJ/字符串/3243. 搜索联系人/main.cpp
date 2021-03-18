#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e4 + 10;
struct Node {
    string name;
    string phone;
};

bool cmp(Node x, Node y) {
    if(x.name == y.name)//两个联系人姓名相同则按号码的字典序递增输出
        return x.phone < y.phone;
    return x.name < y.name;//按姓名的字典序递增顺序
}

int main() {
    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        int n;
        cin >> n;

        Node node[MAXN];
        Node ans[MAXN];
        for(int i = 0; i < n; ++i)
            cin >> node[i].name >> node[i].phone;

        string s;
        cin >> s;

        int index = 0;
        for(int i = 0; i < n; ++i) {
            if(node[i].phone.find(s) != s.npos) {
                ans[index].name = node[i].name;
                ans[index].phone = node[i].phone;
                index++;
            }
        }

        //排序
        sort(ans, ans + index, cmp);
        printf("case #%d:\n%d\n", caseNum++, index);

        for(int i = 0; i < index; i++)
            cout << ans[i].name << " " << ans[i].phone << endl;
    }
    return 0;
}
