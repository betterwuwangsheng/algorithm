#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a;
  double total = 0.0;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &a);
    total += a * 1.0;
  }
  int actual;
  double sum = 0.0;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &actual);
    sum += actual * 1.0;
  }
  double res = (total * 3 - sum * 2) / (total - sum);
  printf("%.6lf\n", res);
  return 0;
}