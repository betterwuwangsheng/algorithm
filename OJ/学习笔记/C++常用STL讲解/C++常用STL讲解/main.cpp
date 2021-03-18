#include <bits/stdc++.h>

using namespace std;

int main() {

    //char a[10], b[10];
    //scanf("%s%s", &a, &b);

    //string s;
    //cin >> s;

    //以下不好使用 -> 字符串使用 string 读入
    //getchar();
    //gets();

    //字符串使用 string 读入更好
    //getline(cin, s);

    //输出
    //cout << s;

    //字符串基本操作
    //赋值 =
    //比较 ==  !=  > >= < <=
    //连接 +=  +
    //访问 s[index]
    //子串 s.substr()
    //长度 s.length()
    //删除 s.erase()
    //替换 s.replace()
    //查找 s.find()

    //vector -> 动态数组
    //创建
    //vector<type> vt;
    //向后面添加元素 ....
    //v.push_back()  ....

    vector<int> vt;
    for(int i = 1; i <= 5; i++)
        vt.push_back(i);
    for(auto v:vt)
        cout << v << " ";

    vector<int>::iterator it1 = vt.begin();
    auto it2 = vt.begin();
    //cout << it2;

    //队列
    //queue<type> q;

    //优先队列 -> 默认大根堆
    //存储必须可以比较的内容
    //大根堆(pq.top() 最大)
    priority_queue<int, vector<int>, less<int> > pq;
    //priority_queue<type> pq;
    //小根堆(pq.top() 最小)
    priority_queue<int, vector<int>, greater<int> > pq2;

    //set<type> 有序且唯一必须定义 < 运算符
    //unordered_set -> 无序 set
    //set<int> s;
    //s.upper_bound(item) 返回第一个大于 item 的元素的迭代器，找不到返回 s.end()
    //s.lower_bound()

    //map<type, type> mp;
    //key ---- val
    //map<int, int> mp;
    //for(auto m:mp)
    //cout << m.first << " " << m.second << endl;

    //去重函数 unique()

    cout << endl;
    cout << endl;
    cout << endl;
    int a[10] = {1, 1, 1, 1, 5, 1};

    for(int i = 1; i <= 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    sort(a + 1, a + 11);
    for(int i = 1; i <= 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "qu chong" << endl;
    unique(a + 1, a + 11);

    cout << endl;
    cout << endl;
    cout << endl;
    for(int i = 1; i <= 10; i++) {
        cout << a[i] << " ";
    }

    //next_permutation(first, last) 全排列
    return 0;
}
