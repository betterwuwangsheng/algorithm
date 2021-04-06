#include <stdio.h>

long long Pow(int x)
/* PreCondition:
      x 是范围为 0-62 的一个整数。
   PostCondition:
      返回 2 的 x 次方的值
*/
{
    //2^0 = 1
    if(x == 0)
        return 1 ;

    //幂为奇数
    else if(x & 1)
        return(2 * Pow(x - 1));

    //幂为偶数
    else {

        //不断求积
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
