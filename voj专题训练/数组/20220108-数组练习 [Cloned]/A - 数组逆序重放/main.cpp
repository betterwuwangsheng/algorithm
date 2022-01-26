#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);

  int num;

  vector<int> a;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &num);
    a.push_back(num);
  }

  // 倒序输出
  // vector<int>::reverse_iterator it;
  // for (it = a.rbegin(); it != a.rend(); it++)
  // {
  //   printf("%d ", *it);
  // }
  vector<int>::iterator it;
  for (it = a.end() - 1; it != a.begin() - 1; --it)
    printf("%d ", *it);
  return 0;
}
