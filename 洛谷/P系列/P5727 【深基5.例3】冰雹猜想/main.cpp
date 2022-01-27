#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

  int n;
  cin >> n;

  int t = n;
  vector<int> res;
  // 奇数
  while (n > 1)
  {
    if (n & 1)
      n = 3 * n + 1;
    else
      n >>= 1;
    res.push_back(n);
  }

  for (int i = res.size() - 1; i >= 0; --i)
    cout << res[i] << " ";
  cout << t;
  return 0;
}