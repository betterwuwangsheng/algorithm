#include <iostream>

// 头文件
// 集合头文件
#include <set>

// 映射头文件
#include <map>

using namespace std;

// 定义 set
// set 集合自动升序排序
set<int> s;

// 定义 map
// int -> int
map<int, int> mp1;

// int -> char
map<int, char> mp2;

// char -> int
map<char, int> mp3;

// string -> string
map<string, string> mp4;

int main() {
    // 迭代变量
    // map<int, int>::iterator it;

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        int x;
        scanf("%d", &x);

        // 这样可以进行映射 -> 自动排序
        mp1[x] = i;

        // 想 set 集合中插入元素使用 insert
        s.insert(x);
    }

    // 遍历
    for (auto ele : s)
        cout << ele << endl;

    for (auto m : mp1) {
        // 输出键值对
        // first -> 键
        // second -> 值
        cout << m.first << " " << m.second << endl;
    }

    cout << "------------" << endl;
    cout << mp1.size() << endl;
    cout << s.size() << endl;

    // 判空
    if (s.empty()) {
        cout << "is null!" << endl;
    } else {
        cout << "not null!" << endl;
    }

    // 遍历 -> 使用迭代变量
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << endl;
    // auto 方式
    for (auto ele : s)
        cout << ele << endl;

    // 反向迭代器
    // set<int>::reverse_iterator r_iter;
    // for (r_iter = s.rbegin(); r_iter != s.rend(); ++it)
    //     cout << *it << endl;

    // 查找
    s.find(1);
    cout << s.count(1) << endl;

    // 定义不去重的 set/map
    multiset<int> ms;

    // 对应迭代器
    multiset<int>::iterator it;

    // 无序 set
    // unordered_set<int> uset;
    return 0;
}