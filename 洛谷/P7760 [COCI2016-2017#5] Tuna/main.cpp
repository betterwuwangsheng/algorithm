#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  int n, x, c;
  cin >> n >> x;

  int a, b, res = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> a >> b;
    if (abs(a - b) <= x)
      res += max(a, b);
    else
    {
      cin >> c;
      res += c;
    }
  }
  cout << res << endl;
  return 0;
}