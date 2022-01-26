#include <iostream>
#include <vector>

using namespace std;

int a[1001];
int b[1001];
int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; ++i)
    scanf("%d", &b[i]);

  int res = 0;
  for (int i = 0; i < n; ++i)
    res += a[i] * b[i];
  printf("%d", res);
  return 0;
}