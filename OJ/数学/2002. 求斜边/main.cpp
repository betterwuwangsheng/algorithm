#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    double f;
    while(scanf("%d %d", &a, &b) != EOF){

        ///�ȼ���Ȼ�����,���Լ�������ʱ��
        f = sqrt(a * a + b * b);
        printf("%.3f\n", f);
    }
    return 0;
}
