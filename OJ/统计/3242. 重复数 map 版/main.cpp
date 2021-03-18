#include <bits/stdc++.h>

using namespace std;

/**
     map<key, val>
     键 -> 数字
     值 -> 出现次数
*/
int main() {
    int T, n;
    scanf("%d", &T);

    for(int cnt = 0; cnt < T; cnt++) {

        //创建 map 集合 ->
        map<int, int> m;
        scanf("%d", &n);

        for(int i = 0; i < n; i++) {

            //读取数据
            int num;
            scanf("%d", &num);

            //查找元素 (此时 val 默认 0)
            //不是集合中最后一个元素
            if(m.find(num) != m.end())

                //对应键的值 + 1
                m[num]++;
            else

                //是集合中最后一个元素(即该元素只出现过一次)
                m[num] = 1;
        }

        int max_ = 0;
        map<int, int>::iterator m_it;

        //遍历 -> 找最大出现次数
        for(m_it = m.begin(); m_it != m.end(); m_it++) {
            max_ = max(max_, m_it -> second);
        }
        cout << "case #" << cnt << ":\n";
        cout << max_ << endl;
    }
    return 0;
}
