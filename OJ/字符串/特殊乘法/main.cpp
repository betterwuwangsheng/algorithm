#include <bits/stdc++.h>

using namespace std;

/**
��Ŀ����
д���㷨����2��С��1000000000�����룬������ ����˷�������123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5

��������:
����С��1000000000����
�������:
��������ж������ݣ�����ÿһ�����ݣ����Input�е�������������ĿҪ��ķ������������õ��Ľ����
ʾ��1

����
123 45
���
54
*/
int main() {

    string str1;
    string str2;

    while(cin >> str1 >> str2) {
        int sum = 0;
        int len1 = str1.size();
        int len2 = str2.size();
        for(int i = 0; i < len1; i++) {
            for(int j = 0; j < len2; j++) {

                ///str1[i] - '0'���ǰ�һ���ַ���ASCIIֵ��ȥ�ַ� '0' ��ASCIIֵ
                sum += (str1[i] - '0') * (str2[j] - '0');
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
