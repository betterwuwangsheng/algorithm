#include <iostream>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  int age;
  float cnt1 = 0;
  float cnt2 = 0;
  float cnt3 = 0;
  float cnt4 = 0;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &age);
    if (age <= 18)
    {
      cnt1++;
    }
    else if (age <= 35)
    {
      cnt2++;
    }
    else if (age <= 60)
    {
      cnt3++;
    }
    else
      cnt4++;
  }
  printf("%.2f\%\n%.2f\%\n%.2f\%\n%.2f\%\n", cnt1 / n * 100.0, cnt2 / n * 100.0, cnt3 / n * 100.0, cnt4 / n * 100.0);
  return 0;
}