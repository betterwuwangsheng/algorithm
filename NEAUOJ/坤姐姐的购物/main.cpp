#include <iostream>

using namespace std;

int main()
{
  int T;
  scanf("%d", &T);
  int a, b, c, d;
  while (T--)
  {
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%d\n", a * c + b * d);
  }
  return 0;
}