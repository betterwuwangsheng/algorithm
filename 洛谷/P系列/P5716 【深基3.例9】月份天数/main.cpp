#include <bits/stdc++.h>

using namespace std;

//ÿ���µ�����
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int year, m;

    cin >> year >> m;

    //�ж��Ƿ�Ϊ����
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

        //�޸���������µ�����
        month[2] = 29;

    //�������
    cout << month[m];
    return 0;
}