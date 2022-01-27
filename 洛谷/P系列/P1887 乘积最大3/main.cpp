#include <iostream>

using namespace std;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int b = n / m;
    int a = n % m;
    for (int i = 1; i <= m - a; i++)
        cout << b << " ";
    for (int i = 1; i <= a; i++)
        cout << b + 1 << " ";
    return 0;
}