#include <bits/stdc++.h>

using namespace std;
int main() {
    //���ȶ���
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

            //���
            pq.push(x);
        } else if (op == 2) {
            //���Ѷ�Ԫ��
            cout << pq.top() << endl;
        } else {
            //���Ѷ�Ԫ��
            pq.pop();
        }
    }
    return 0;
}
