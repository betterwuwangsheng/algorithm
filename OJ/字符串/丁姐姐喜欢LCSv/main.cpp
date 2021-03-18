#include <bits/stdc++.h>

using namespace std;

/**
ʱ�����ƣ�C/C++ 1�룬��������2��
�ռ����ƣ�C/C++ 131072K����������262144K
64bit IO Format: %lld

��Ŀ����
��������������LCS(The longest common substring)!

���������Ҹ����������棬�������ҵ��������ַ���A��B����������֪������βͷ�ν��γɵ���ַ���,����A = abc,B = bca��A��β����ʼ��A����bc��B����bcͷβ�νӡ�

��������:
�������ݰ����������������ÿ����������ռ���У���һ�����ַ���A���ڶ������ַ���B����֤ÿ���ַ����ĳ��Ȳ�����1010��
�������:
A��Bβͷ�ν��γɵ���ַ���������ÿ������ʵ�������һ�У��������ַ������νӣ����"NULL!"���������ţ���
ʾ��1

����
����

abc
bca
wad
ad
as
asd
wa
aw
wa
wwa
���
����

bc
ad
as
a
"NULL!"
*/
int main() {
    string A, B;

    ///��������
    while(cin >> A >> B) {
        int flag = 0;

        int len1 = A.size();
        int len2 = B.size();

        ///Ѱ��������Ӵ�
        int len = min(len1, len2);

        ///�Ӻ���ǰѰ���Ӵ��Ƿ���ͬ
        for(int i = len; i >= 1; i--) {

            ///ͨ�����ַ������бȽ�
            /// abc bc
            /// a bc bc
            ///   || ||
            string s1 = A.substr(len1 - i,i);
            string s2 = B.substr(0, i);

            ///�Ӵ���ͬ
            if(s1 == s2) {

                ///���
                cout << s1 << endl;

                ///���
                flag = 1;

                ///����ѭ��
                break;
            }
        }
        if(flag == 0) {
            cout << '"' << "NULL!" << '"' << endl;
        }
    }

    return 0;
}
