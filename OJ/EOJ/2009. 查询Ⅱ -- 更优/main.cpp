#include <bits/stdc++.h>

using namespace std;

const int MX = 1e5 + 2;

/**
    ������ -> ����ӳ��˼������Ż�
*/
//����ӳ���������
//0 -> �����ڸ���
int flag[MX] = {0};

//ѯ������
int ask[MX];

//���������
int num;

int main() {

    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &num);
        flag[num] = 1;
    }

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &ask[i]);
        if(flag[ask[i]] == 1) {
            printf("yes!\n");
        } else {
            printf("no!\n");
        }
    }
    return 0;
}
