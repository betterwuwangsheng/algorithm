#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  long long num;
  scanf("%ld", &num);

  vector<long long> v;
  while (num)
  {
    long long temp = num;
    temp >>= 1;
    v.push_back(temp);
  }

  for (int i = 0, j = v.size() - 1; i > j; i++, j--)
  {
    swap(v[i], v[j]);
  }

  double sum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += pow(i, 2);
  }
  cout << sum;
  return 0;
}