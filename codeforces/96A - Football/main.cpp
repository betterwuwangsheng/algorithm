#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    //���������ļ����ַ� -> ���ַ����в��Ҹ��ַ���
    // s.fing(str)
    //�ɹ� -> ����λ��
    //���ɹ� -> -1
    if (s.find("1111111") != -1 || s.find("0000000") != -1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
