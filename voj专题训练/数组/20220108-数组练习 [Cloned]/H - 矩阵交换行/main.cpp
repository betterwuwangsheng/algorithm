#include <iostream>

using namespace std;

int main()
{

  int num[5][5];
  for (int i = 0; i < 5; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      scanf("%d", &num[i][j]);
    }
  }

  int m, n;
  scanf("%d %d", &m, &n);

  for (int i = 0; i < 5; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      if ((i + 1) == m)
      {
        swap(num[i][j], num[n - 1][j]);
      }
    }
  }
  for (int i = 0; i < 5; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      printf("%d ", num[i][j]);
    }
    printf("\n");
  }
  return 0;
}