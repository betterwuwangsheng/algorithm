#include <cstdio>
int main() {
    long double a, sum;  // long double ��֤����
    while (scanf("%Lf", &a) != EOF)
        sum += a * 1000000;  //ȥ��С�����֣�ֱ�ӳˣ��������
    printf("%.5Lf", sum / 1000000);  //������
    return 0;
}