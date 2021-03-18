#include <bits/stdc++.h>
#include <set>
using namespace std;

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
/**
    set容器只是单纯的键的集合，键必须为一。
    set容器不支持下标操作，而且没有定义maped_type类型。
    在set容器中，value_type不是pair类型，而是与key_type类型相同的类型。
*/
int main() {
    ///初始化 set
    set<int> st;

    ///插入元素
    for(int i = 0; i < 5; i++) {
        st.insert(i);
    }
    st.insert(5);

    ///set 集合的键必须唯一
    st.insert(5);

    set<int>::iterator it;
    for( it : st) {
        cout << it <<' ';
    }

    cout << endl;

    set<node> stk_node;
    stk_node.insert(node(1, 2));
    stk_node.insert(node(0, 3));

    set<node>::iterator it2;
    for( it2 : stk_node) {
        cout << it2.x << it2.y <<' ';
    }

//    cout << stk_node << "大小：" << stk_node.size();
    return 0;
}
