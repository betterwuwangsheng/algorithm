#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    int n;
    while(cin >> s >> n) {
        int len = s.size();

        //双端队列
        deque<char> q;
        for(int i = 0; i < len; ++i) {

            //入队尾
            q.push_back(s[i]);
        }

        //循环右移
        while(n--) {

            //获取队尾元素
            char b = q.back();

            //队尾元素出栈
            q.pop_back();

            //队尾元素入队头
            q.push_front(b);
        }

        cout << len << " ";

        s = "";
        while(!q.empty()) {

            s += q.front();

            //出队头
            q.pop_front();
        }

        for(int i = 0; i < len; ++i) {
            if(s[i] == '0')
                s.erase(i, 1); //删除某字符
            break;
        }
        cout << s << endl;
    }
    return 0;
}
