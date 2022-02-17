#include <iostream>

using namespace std;

int main()
{
  int n, q;
  scanf("%d %d", &n, &q);

  int score[4] = {0, 0, 0, 0};
  int a, b, c, d;
  for (int i = 0; i < q; ++i)
  {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (c < d)
    {
      score[b - 1] += 3;
      score[a - 1] -= 2;
    }
    else
    {
      score[a - 1] += 3;
      score[b - 1] -= 2;
    }
  }

  int mx = 0;
  int idx = 0;
  for (int i = 0; i < 4; ++i)
  {
    if (score[i] > 0)
    {
      mx = score[i];
      idx = i;
    }
  }
  printf("%d", idx + 1);
  return 0;
}