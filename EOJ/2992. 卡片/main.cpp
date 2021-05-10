#include <bits/stdc++.h>

using namespace std;

int main() {

    //问题数
    int T;
    scanf("%d", &T);

    //读入每个问题
    for(int cnt = 0; cnt < T; cnt++) {

        //读入卡牌数
        int num;
        scanf("%d", &num);

        //创建队列
        queue<int> q;

        //加入数据
        for(int i = 1; i <= num; i++) {
            q.push(i);
        }

        while(q.size() != 1) {
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << "case #" << cnt << ":\n" << q.front() << endl;
    }

    return 0;
}
