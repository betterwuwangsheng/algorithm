#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, maxx = 0, day = 0;
    for (int i = 1; i <= 7; ++i) {
        scanf("%d%d", &a, &b);

        int time = a + b;  //һ����Ͽ�ʱ��
        if (time > maxx) {
            maxx = time;  //��������˵�һ��
            day = i;      //��¼����һ��
        }
    }
    printf("%d", day);
    return 0;
}