#include <bits/stdc++.h>

using namespace std;

int main() {

    //������
    int T;
    scanf("%d", &T);

    //����ÿ������
    for(int cnt = 0; cnt < T; cnt++) {

        //���뿨����
        int num;
        scanf("%d", &num);

        //��������
        queue<int> q;

        //��������
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
