#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    //而%i 则可以匹配八进制、十进制、十六进制表示的整数。·
    printf("%d\n%d\n%d\n", a || b, a | b, a ^ b);
   // printf("%i\n%i\n%i\n", a || b, a | b, a ^ b);
}
