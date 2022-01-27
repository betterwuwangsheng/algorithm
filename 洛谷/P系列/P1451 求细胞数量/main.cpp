#include <bits/stdc++.h>

using namespace std;

//�ĸ�����
int to_x[] = {-1, 0, 1, 0};
int to_y[] = {0, 1, 0, -1};

//��¼��������
int mp[110][110];

//����Ƿ����
bool vis[110][110];

int n, m, cnt = 0;
int main() {
    scanf("%d%d", &n, &m);

    //�������
    char ch;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> ch;
            mp[i][j] = ch - '0';
        }
    }

    //��¼��������
    queue<int> x;
    queue<int> y;

    //��ʼ��
    x.push(0);
    y.push(0);
    vis[0][0] = 1;  //���Ϊ����

    //���в���
    while (!x.empty()) {
        //�����ĸ�����
        for (int i = 1; i <= 4; ++i) {
            int dx = x.front() + to_x[i];
            int dy = y.front() + to_y[i];

            //�жϱ߽�
            if (dx >= 0 && dx <= m + 1 && dy >= 0 && dy <= n + 1 &&
                !vis[dx][dx] && 1 <= mp[dx][dy] && mp[dx][dy] <= 9) {
                //���
                x.push(dx);
                y.push(dy);
                vis[dx][dy] = 1;  //���Ϊ����
                cnt++;
            }
        }

        //������ϳ���
        x.pop();
        y.pop();
    }
    printf("%d", cnt);
    return 0;
}