#include <iostream>
#include <algorithm>

using namespace std;

int a[26] = {0};
int main()
{
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); ++i)
    a[s[i] - 'a']++;

  int max = 0, c = 0;
  for (int i = 0; i < 26; ++i)
    if (a[i] > max)
    {
      max = a[i];
      c = i + 97;
    }
  printf("%c %d", c, max);
  return 0;
}