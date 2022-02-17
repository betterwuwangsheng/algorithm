#include <iostream>

using namespace std;

int main()
{
  double num;
  double sum = 0.0;
  for (int i = 0; i < 12; ++i)
  {
    scanf("%lf", &num);
    sum += num;
  }
  printf("$%.2lf", sum / 12.0);
  return 0;
}