#include <bits/stdc++.h>

using namespace std;

/**
����ʱ��: 2.0 sec

�ڴ�����: 256 MB

����һ���ַ��������Ȳ����� 10000����ת�������ַ�����

�����ʽ
ÿ��һ���ַ������пո�

�� Case�������ļ�������

�����ʽ
ÿ��һ�У������ת����ַ�����

����
input
abcd
abcd a
output
dcba
a dcba

*/


int main()
{
    string s;
    while(getline(cin,s)){
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
