#include <bits/stdc++.h>

using namespace std;

int N, T;
double sum = 0;
struct gold {
    int m;
    int v;
} g[110];

//����������ֵ�ȣ�Ҳ���ǵ�λ�۸񣩽�������
bool cmp(gold a, gold b) {
    //return a.v / a.m > b.v / b.m;
    //���ڳ������ڴ����������� -> ͨ��
    return (a.v * b.m) > (a.m * b.v);
}
int main() {
    cin >> N >> T;
    for(int i = 1; i <= N; i++) {
        cin >> g[i].m >> g[i].v;
    }

    sort(g + 1, g + 1 + N, cmp);

    //װ���
    for(int i = 1; i <= N; i++) {

        //������
        if(T >= g[i].m) {

            //�ܼ�ֵ����
            sum += g[i].v;

            //������������������
            T -= g[i].m;

        } else {//���� -> �������Լ�ֵ
            sum += 1.0 * T * g[i].v / g[i].m;
            T = 0;
            break; //����ѭ��
        }
    }

    printf("%.2lf\n", sum);
    return 0;
}
