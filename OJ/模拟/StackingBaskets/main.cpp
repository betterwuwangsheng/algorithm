#include <iostream>
#include <cstdio>

using namespace std;

/**

Problem Description
��Ҫ��ʱ�򣬾Ͱ�һ������С��һȦ�Ŀ����ȥ��ʹ�ô������¿�ʱ���߿�ɫ���������������Ҫ�ü��������ɣ��ÿ�����ˡ�


Input
������һ��������Ԫ�飬�ֱ��ǣ����ߴ�n��nΪ����0<n<80���������������Ļ�ɫ�ַ������ɫ�ַ�������߶�ΪASCII�ɼ��ַ���


Output
�������һ��Ŀ�ͼ�������Ļ�ɫ�����ɫ�ַ����ڲ��𽻴������������ʱ�������Ľ����Ǳ���ĥ�������������֮��Ӧ��һ�м����


Sample Input
11 B A
5 @ W


Sample Output
 AAAAAAAAA
ABBBBBBBBBA
ABAAAAAAABA
ABABBBBBABA
ABABAAABABA
ABABABABABA
ABABAAABABA
ABABBBBBABA
ABAAAAAAABA
ABBBBBBBBBA
 AAAAAAAAA

 @@@
@WWW@
@W@W@
@WWW@
 @@@

*/
char matrix[80][80]; //��������������ͼ��

int main() {
    //ͨ����ǵ���ٽ��л���
    bool firstCase = true; //�ûس����ż��ÿһ�Ĵ�

    int n; //���ߴ�
    char a, b; //��ɫ  �ַ�
    while(scanf("%d %c %c",&n, &a, &b) != EOF) { //
        //��һ�β�����
        if(firstCase)
            firstCase = false;
        else  //���ǵ�һ�Σ�����
            printf("\n");

        for(int i = 0; i <= n / 2; i++) {
            //i + j = n - 1
            int j = n - i - 1;

            //�߳�
            int length = n - 2 * i;

            //ĳһȦʹ�õĻ�ɫ����
            char c;
            if((n / 2 - i) % 2 == 0) {
                c = a;
            } else {
                c = b;
            }

            //����ͼ��
            for(int k = 0; k < length; ++k) {
                //(i,i) ���Ͻ�
                //(j,j) ���½�
                matrix[i][i + k] = c; //�ϱ�
                matrix[i + k][i] = c; //�±�
                matrix[j][j - k] = c; //�ұ�
                matrix[j - k][j] = c; //���
            }
        }

        //�ߴ� = 1 �����пո��滻
        if(n > 1) {
            matrix[0][0] = ' ';
            matrix[0][n - 1] = ' ';
            matrix[n - 1][0] = ' ';
            matrix[n - 1][n - 1] = ' ';
        }

        //���ͼ��
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf("%c",matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
