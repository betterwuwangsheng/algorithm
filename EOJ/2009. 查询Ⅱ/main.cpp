#include <bits/stdc++.h>

using namespace std;

const int MX = 1e5 + 2;
int num[MX];
int ask[MX];
int flag = 0;
int main() {
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &num[i]);
    }

    //����
    sort(num, num + m);

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &ask[i]);
    }

    for(int i = 0; i < n; i++) {

        //���ֲ��Һ���
        bool flag = binary_search(num, num + m, ask[i]);
        if(flag) {
            printf("yes!\n");
        } else {
            printf("no!\n");
        }
    }
    return 0;
}
