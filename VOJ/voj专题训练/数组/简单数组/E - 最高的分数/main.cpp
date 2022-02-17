#include <iostream>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);

  int max = 0, num;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &num);
    if (max < num)
    {
      max = num;
    }
  }
  printf("%d", max);
  return 0;
}