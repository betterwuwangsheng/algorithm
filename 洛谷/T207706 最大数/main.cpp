#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  double a, b, c;
  cin >> a >> b >> c;

  double upper = max(max(a, b), c);
  double down_l = max(max(a + b, b), c);
  double down_r = max(max(a, b), b + c);

  double res = upper / (down_l * down_r) * 1.0;
  printf("%.3lf", res);
  return 0;
}