#include <iostream>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);

  int num, sum = 0;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &num);
    sum += num;
  }

  printf("%d %.5f", sum, sum * 1.0 / n * 1.0);
  return 0;
}