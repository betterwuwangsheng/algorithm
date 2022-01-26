#include <iostream>

using namespace std;

int a[105] = {0};
int main()
{
  int n;
  scanf("%d", &n);
  int num;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &num);
    cout << a[num + 50] << " ";
    a[num + 50]++;
    cout << a[num + 50] << endl;
  }

  int flag = 0;
  for (int i = 0; i < n; ++i)
  {
    if (a[i] > n / 2)
    {
      flag = 1;
      printf("%d", a[i]);
    }
  }
  if (flag == 0)
  {
    printf("no");
  }

  return 0;
}