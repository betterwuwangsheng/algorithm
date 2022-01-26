#include <iostream>

using namespace std;

int main()
{

  int m, n;
  scanf("%d %d", &n, &m);
  int a[m][n];
  int b[m][n];
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      scanf("%d", &b[i][j]);
    }
  }

  int cnt = 0;
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      if (a[i][j] == b[i][j])
      {
        cnt++;
      }
    }
  }

  printf("%.2f", (cnt * 1.0) / (n * m * 1.0) * 100);
  return 0;
}