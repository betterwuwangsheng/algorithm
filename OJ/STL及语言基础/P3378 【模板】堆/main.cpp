#include <bits/stdc++.h>

using namespace std;
int main() {
    //优先队列
    // greateer<int>
    priority_queue<int, vector<int>, greater<int> > pq;

    int n;
    cin >> n;

    while (n--) {
        int op;
        cin >> op;

        if (op == 1) {
            int x;
            cin >> x;

            //入堆
            pq.push(x);
        } else if (op == 2) {
            //出堆顶元素
            cout << pq.top() << endl;
        } else {
            //出堆顶元素
            pq.pop();
        }
    }
    return 0;
}
