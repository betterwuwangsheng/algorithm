#include <iostream>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    int cnt = 0;
    while (T--)
    {
        int n;
        scanf("%d", &n);

        while (n--)
        {
            int a, b, suma = 0, sumb = 0;
            scanf("%d %d", &a, &b);
            suma += a;
            sumb += b;
            if (suma < b && a < b && suma < sumb)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}