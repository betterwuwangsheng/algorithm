#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
  int n, flag = 1;
  scanf("%d", &n);

  int num[n], diff[n - 1];

  for (int i = 1; i <= n; ++i)
    scanf("%d", &num[i]);

  for (int i = 1; i <= n - 1; ++i)
  {
    diff[i] = abs(num[i] - num[i + 1]);
  }

  sort(diff + 1, diff + n);

  for (int i = 1; i <= n - 1; i++)
  {
    if (i != diff[i])
    {
      flag = 0;
      break;
    }
  }

  if (flag == 1)
    printf("Jolly");
  else
    printf("Not jolly");
  return 0;
}