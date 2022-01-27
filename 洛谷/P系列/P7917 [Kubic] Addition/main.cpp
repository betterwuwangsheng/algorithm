#include <algorithm>
#include <iostream>

using namespace std;
int main()
{
  int n;
  cin >> n;
  int num;
  long long res = 0;
  cin >> num;
  res += num;
  for (int i = 2; i <= n; i++)
  {
    cin >> num;
    if (num < 0)
      // < 0 => x - y 变大
      res -= num;

    // > 0 => x + y 变大
    else
      res += num;
  }

  cout << res << endl;
  return 0;
}