#include <iostream>
#include <map>

using namespace std;

/**
自动建立Key － value的对应。key 和 value可以是任意你需要的类型。

根据key值快速查找记录，查找的复杂度基本是Log(N)，如果有1000个记录，最多查找10次，1,000,000个记录，最多查找20次。

快速插入Key -Value 记录。

快速删除记录

根据Key 修改value记录。

遍历所有记录。
*/
struct node {
    int x;
    int y;

    ///构造函数
    node(int a, int b) {
        x = a;
        y = b;
    }

    ///重载运算符 <
    bool operator < (node a) const {

        ///结构体大小比较
        return x < a.x;
    }
};
int main() {
    ///初始化 double -> string 的映射
    map<double, string> map1;
    map<node,long long> map2;

    ///初始化 map
    map<char, int> mp;

    ///建立映射
    mp['a'] = 1;
    mp['c'] = 3;
    mp['b'] = 5;



    map<int, int> m;
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;

        ///学号没有重复
        ///map 可以通过下标访问
        if(m[num]) { /// 默认建立 null 映射

        } else {
            m[num] = 1;
        }
    }
    return 0;
}
