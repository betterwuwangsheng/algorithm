#include <bits/stdc++.h>

using namespace std;

int main() {
    //读入十进制数据
    int num;
    cin >> num;

    queue<int> q;
    while(num > 0) {

        //获取二进制末位
        int temp = num % 2;

        //加入队列
        q.push(temp);

        //右移
        num /= 2;
    }

    long long  sum = 0;
    for(int i = q.size(); i >= 1 ; i--) {
        sum += (q.front() * pow(2, i - 1));
        q.pop();
    }

    cout << sum;
    return 0;
}
