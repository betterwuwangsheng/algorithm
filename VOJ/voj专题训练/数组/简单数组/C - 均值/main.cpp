#include <iostream>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);

  double num, sum = 0.0;

  for (int i = 0; i < n; ++i)
  {
    scanf("%lf", &num);
    sum += num;
  }
  printf("%.4lf", sum / n * 1.0);
  return 0;
}