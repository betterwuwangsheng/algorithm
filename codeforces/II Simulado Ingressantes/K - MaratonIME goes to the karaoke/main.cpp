#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();  //��ȡ����
    int cnt = 1;           //��¼�ַ�����
    for (int i = 0; i < len; ++i) {
        if (s[i] == s[i + 1])  //�ַ���ͬ
            cnt++;             //�ַ���������
        else {
            printf("%c%d", s[i], cnt);
            cnt = 1;  //��һ��ʼ����
        }
    }
    printf("\n");
    return 0;
}
