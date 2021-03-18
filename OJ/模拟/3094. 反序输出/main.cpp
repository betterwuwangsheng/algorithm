#include <bits/stdc++.h>

using namespace std;

int main() {

    //数据数量
    int n;
    scanf("%d", &n);

    vector<int> vt;

    //读入数据
    while(n--) {
        int num;
        scanf("%d", &num);

        vt.push_back(num);
    }

    //反转vector
    reverse(vt.begin(), vt.end());

    //迭代器
    vector<int>::iterator it;
    long long int sum = 0;
    double avg;
    for(it = vt.begin(); it != vt.end(); it++) {

        //输出反序
        cout << (*it) << ' ';

        //求和
        sum += (*it);
    }
    avg = sum / (double)vt.size();
    printf("\n%lld %.2lf", sum, avg);

    return 0;
}
