#include <iostream>

using namespace std;

int main()
{
  int T;
  scanf("%d", &T);

  int x, y, z;
  while (T--)
  {
    scanf("%2d%3d%4d", &x, &y, &z);
    printf("%d\n", x * y * z);
  }
  return 0;
}