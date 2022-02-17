#include <iostream>

using namespace std;

int main()
{
  int T;
  scanf("%d", &T);

  int time;
  while (T--)
  {
    scanf("%d", &time);

    int h, m, s;
    printf("%02d:%02d:%02d\n", time / 3600, (time % 3600 / 60), time % 60);
  }
  return 0;
}