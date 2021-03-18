#include <bits/stdc++.h>

using namespace std;

/**
��Ŀ����
Farmer John������һ����N(2<=N<=100,000)�������ţ���Щ����ֲ���һ��ֱ���ϣ�������x1,...,xN (0<=xi<=1,000,000,000)��

����C(2<=C<=N)ͷţ�����ڸ����λ�÷ֲ�������Ϊţ����������ţ�Ĵ��ڶ���ŭ��Ϊ�˷�ֹţ֮��Ļ���򶷣�Farmer John�����Щţ������ָ���ĸ��䣬����ţ��������ͷ���������Խ��Խ�á���ô�����������������Ƕ����أ�

�����ʽ
��1�У������ÿո����������N��C��

��2~N+1�У�ÿ��һ����������ʾÿ����������ꡣ

�����ʽ
���ֻ��һ�У���������ͷţ����������롣

�����������
���� #1����
5 3
1
2
8
4
9

��� #1����
3
*/

const int MX = 1e5 + 1;
int pos[MX];

//ʹ�ö��ַ����鵱ǰ�����Ƿ����
bool check(int n, int c, int d) {
    //n ��������
    //c ţ������
    //d ��С����
    //̰�� -> ����ѡ�������һͷţ����ĸ��䣬�� ���� >= d

    //�ݴ���һͷţ����ţ���λ��
    int temp_pos = n;
    c--;

    while(c--) {

        //�������һ������ʹ�������һ������ľ��� >= d
        //��һ��������ѡ���λ��
        int next_pos = -1;

        int l = 1, r = temp_pos - 1;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(pos[temp_pos] - pos[mid] >= d) {

                next_pos = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(next_pos == -1) {
            return false;
        } else {
            temp_pos = next_pos;
        }
    }
    return true;
}
int main() {

    //N (2<=N<=100,000) ������
    //C (2<=C<=N) ͷţ
    int N, C;
    scanf("%d%d", &N, &C);

    //�� 1 ��ʼ�洢���ӷ���
    for(int i = 1; i <= N; i++) {
        scanf("%d", &pos[i]);
    }

    //���򣬴� 1 ��ʼ
    sort(pos + 1, pos + 1 + N);

    int l, r, mid;
    l = 0;
    r = pos[N];

    int ans = 0;

    //���ִ���s
    while(l <= r) {

        //��ǰ����������
        mid = l + (r - l) / 2;
        if(check(N, C, mid)) {
            ans = mid;

            //����С��������ֵ -> �������ұ�
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}
