#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1000; i < 10000;i++)
    {
        int m = i % 10;
        int n = (i/10) % 10;
        int p = (i/100) % 10;
        int q = (i/1000) % 10;
        if ((m * m * m * m + n * n * n * n + p * p * p * p + q * q * q * q) == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
