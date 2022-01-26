#include <iostream>
#include <cmath>

using namespace std;

bool check(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);

    int num, cnt = 0;
    while (n--)
    {
        scanf("%d", &num);
        if (check(num))
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}