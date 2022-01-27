#include <iostream>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int cnt;
        scanf("%d", &cnt);

        for (int i = 0; i < cnt; ++i)
        {
            char ch = 'a' + i;
            printf("for(%c=1;%c<=100;%c++)\n", ch, ch, ch);
        }
    }
    return 0;
}