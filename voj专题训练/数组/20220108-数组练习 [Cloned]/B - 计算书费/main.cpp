#include <iostream>

using namespace std;

float price[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
int main()
{
  int cnt;
  float ans = 0;
  for (int i = 0; i < 10; ++i)
  {
    scanf("%d", &cnt);
    ans += price[i] * cnt;
  }

  printf("%.1f", ans);
  return 0;
}