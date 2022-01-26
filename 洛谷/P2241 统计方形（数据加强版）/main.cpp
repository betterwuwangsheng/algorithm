#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int res1 = n * m, res2 = 0;

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
    {
      // 是正方形
      if (i == j)
        res1++;
      else if (n != m)
        res2++;
    }
  cout << res1 << " " << res2;
  return 0;
}