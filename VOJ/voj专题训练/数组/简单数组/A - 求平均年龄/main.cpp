#include <iostream>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);

  int num;
  double sum = 0.0;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &num);
    sum += num;
  }

  printf("%.2f", sum / n);
  return 0;
}