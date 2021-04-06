#include <bits/stdc++.h>

using namespace std;

//�洢�ĸ�����
//��������˳��
int to_x[4] = {-1, 1, 0, 0};
int to_y[4] = {0, 0, -1, 1};

int mp[40][40];

//�������
bool vis[40][40];

int n;

struct node {
    int x;
    int y;
};

int main() {
    scanf("%d", &n);

    //����
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }

    //��ʼ������
    queue<node> q;

    //�����(����� 0 Ȧ��ʼ����)
    node start;
    start.x = 0;
    start.y = 0;

    //�����ջ
    q.push(start);

    //��� [0,0] �ѷ���
    vis[0][0] = 1;

    //ջ�ǿ�
    while (!q.empty()) {
        //ȡ����ͷԪ��
        start = q.front();

        //����Ԫ�س���
        q.pop();

        //�������ұ���
        for (int i = 0; i < 4; ++i) {
            node b;
            b.x = start.x + to_x[i];
            b.y = start.y + to_y[i];

            //�ж��Ƿ���Է���
            if (b.x >= 0 && b.x <= n + 1 && b.y >= 0 && b.y <= n + 1 &&
                mp[b.x][b.y] == 0 && !vis[b.x][b.y]) {
                //���Է��� -> ���
                q.push(b);

                //��� [dx,dy] �ѷ���
                vis[b.x][b.y] = 1;
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            //Ϊ 0 ��δ���ʵ�
            if (mp[i][j] == 0 && vis[i][j] == 0) {
                //��� 2
                printf("2");
            } else {
                //����ֱ�����
                printf("%d", mp[i][j]);
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}