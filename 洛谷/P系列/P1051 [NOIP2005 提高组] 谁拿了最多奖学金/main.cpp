#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, score1, score2, sum = 0, max = 0, total = 0, x, i;
    char a, b;
    string name, maxn;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> name >> score1 >> score2 >> a >> b >> x;
        if (score1 > 80 && x > 0)  //�ж��Ƿ���Ժʿ��ѧ��
            sum += 8000;
        if (score1 > 85 && score2 > 80)  //�ж��Ƿ������Ľ�ѧ��
            sum += 4000;
        if (score1 > 90)  //�ж��Ƿ��óɼ����㽱
            sum += 2000;
        if (score1 > 85 && b == 'Y')  //�ж��Ƿ���������ѧ��
            sum += 1000;
        if (score2 > 80 && a == 'Y')  //�ж��Ƿ��ð༶���׽�
            sum += 850;
        total += sum;                //�ۼӽ�ѧ��
        if (sum > max)               //�ҳ���ţѧ��
            maxn = name, max = sum;  // sum���ô�
        sum = 0;
    }
    cout << maxn << endl << max << endl << total;
    return 0;
}