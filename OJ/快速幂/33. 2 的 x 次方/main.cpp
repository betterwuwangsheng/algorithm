#include <stdio.h>

long long Pow(int x)
/* PreCondition:
      x �Ƿ�ΧΪ 0-62 ��һ��������
   PostCondition:
      ���� 2 �� x �η���ֵ
*/
{
    //2^0 = 1
    if(x == 0)
        return 1 ;

    //��Ϊ����
    else if(x & 1)
        return(2 * Pow(x - 1));

    //��Ϊż��
    else {

        //�������
        long long int ans = Pow(x >> 1);
        return ans * ans;
    }

    //return x==0?1:Pow(x-1)<<1;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%lld\n", Pow(x));
    return 0;
}
