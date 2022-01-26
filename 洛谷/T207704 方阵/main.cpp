#include <algorithm>
#include <iostream>

using namespace std;

int a[110][110];

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      if (j <= i || i <= j)
        a[i][j] = 1;
    }
  }

  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      cout << a[i][j];
    }
  }

  return 0;
}