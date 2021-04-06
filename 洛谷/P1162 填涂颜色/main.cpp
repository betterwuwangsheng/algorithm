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

int main() {
    scanf("%d", &n);

    //���뷽��
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }

    //���� -> (x, y)
    queue<int> x;
    queue<int> y;

    //��ʼ���������
    x.push(0);
    y.push(0);
    vis[0][0] = 1;  //���Ϊ���ʹ�

    //�����������
    //���в�Ϊ�� -> ȡֵ -> ����
    while (!x.empty()) {
        //�ĸ�����
        for (int i = 0; i < 4; ++i) {
            //�µ�λ��
            int dx = x.front() + to_x[i];
            int dy = y.front() + to_y[i];

            //�ж��Ƿ���ʹ����Ƿ�Խ��
            if (dx >= 0 && dx <= n + 1 && dy >= 0 && dy <= n + 1 &&
                mp[dx][dy] == 0 && !vis[dx][dy]) {  //Ϊ 0 ��δ����

                //���Է��ʵĵ� - > ���
                x.push(dx);
                y.push(dy);
                vis[dx][dy] = 1;  //���Ϊ����
            }
        }

        //������� -> ����
        x.pop();
        y.pop();
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            //Ϊ 0 ��δ���ʹ�
            if (mp[i][j] == 0 && vis[i][j] == 0)
                printf("2 ");
            else
                printf("%d ", mp[i][j]);
        }
        printf("\n");
    }
    return 0;
}