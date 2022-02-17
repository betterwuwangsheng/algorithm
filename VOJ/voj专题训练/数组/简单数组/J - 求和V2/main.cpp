#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
  ll a, b, c;
  scanf("%ld %ld %ld", &a, &b, &c);

  printf("%ld", a * b % c);
  return 0;
}