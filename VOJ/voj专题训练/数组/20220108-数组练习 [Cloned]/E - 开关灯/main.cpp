#include <iostream>

using namespace std;
int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n] = {1};
  int b[m];
  for (int i = 0; i < m; ++i)
  {
    if (a[i] % b[i] == 0 && a[i] == 1)
    {
      a[i] = 0;
    }
    else
    {
      a[i] = 1;
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}