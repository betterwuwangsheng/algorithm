#include <bits/stdc++.h>
#include <stack>

using namespace std;

/**
��������
��������˹ϲ�����෴�ķ�ʽд�ʡ�������Ignatius��д�ĵ����ı�����Ӧ�÷�ת���е��ʣ�Ȼ��������ǡ�


����ֵ
�������������������������ĵ�һ���ǵ�������T�����ǲ��������������������T����������
ÿ��������������һ�У�������������ʡ�һ���������1000���ַ���


�����
����ÿ��������������Ӧ������Ѵ�����ı���


��������
3
olleh��dlrow
m'I morf .udh
��ekil .mca


�������
��ã����磡
������hdu��
��ϲ��ACM��

��ʾ

���ס��������T֮��ʹ��getchar������ȡ'\ n'����ô������ʹ��gets������ȡһ�в����д���
*/
int main() {
    int T;
    char c;

    ///��ʼ��ջ
    stack<char> stk;
    scanf("%d", &T);

    getchar(); ///�Ե� \n
    for(int i = 0; i < T; i++) {
        while((c = getchar()) != '\n') {

            ///����ո�
            if(c == ' ') {

                ///ջ����
                while(!stk.empty()) {

                    ///��ӡջ������
                    printf("%c", stk.top());

                    ///��ջ
                    stk.pop();
                }
                printf(" ");
            } else {

                ///�ǿո�
                ///��ջ
                stk.push(c);
            }
        }

        ///�������һ�����ʺ���û�пո�
        ///ջ����
        ///��ӡջ��Ԫ��
        ///��ջ
        while(!stk.empty()) {
            printf("%c", stk.top());
            stk.pop();
        }

        cout << endl;
    }
    return 0;
}
