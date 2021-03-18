#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     map初始化 -> 空 map
        map<k, v> m;
        map<k, v> m(m2);
        map<k, v> m(b, e);
     map中元素的插入
        使用下标
        m.insert(e)

        使用insert函数
        m.insert(beg, end)
        m.insert(iter, e)
     在map中使用下标访问不存在的元素将导致在map容器中添加一个新的元素。

     map中元素的查找和读取
        查找该元素是否存在，可以使用函数count(k) > 0 -> 存在
        该函数返回的是k出现的次数；

        若是想取得key对应的值，可以使用函数 find(k)
        该函数返回的是指向该元素的迭代器。(指针)(通过 *进行取值)

        (*it).first会得到 key，
        (*it).second会得到 value。
        从map中删除元素

    从map中删除元素的函数是erase()，该函数有如下的三种形式：
        m.erase(k)
        m.erase(p)
        m.erase(b, e)

    */
    return 0;
}
