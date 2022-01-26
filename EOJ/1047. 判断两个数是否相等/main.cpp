#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  int a, b;
  while (scanf("%d %d", &a, &b))
  {
    if (a == b)
      cout << "It's xiao qiang";
    else
      cout << "It isn't xiao qiang";
  }
  return 0;
}
