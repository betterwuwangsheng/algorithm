#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int i, j, k, flag = 0;
    for (i = -100; i <= 100; ++i)
    {
        for (j = -100; j <= 100; ++j)
        {
            for (k = -100; k <= 100; ++k)
            {
                if (a * i + b * j + c * k + d == 0)
                {
                    flag = 1;
                    printf("%d %d %d\n", i, j, k);
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    if (!flag)
        printf("-1");
    return 0;
}