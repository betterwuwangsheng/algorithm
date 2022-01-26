#include <iostream>

using namespace std;

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int num;
    int cnt = 0;
    while (n--)
    {
        scanf("%d", &num);
        if (num > k)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}