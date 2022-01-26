#include <iostream>

using namespace std;

const int MOD = 1000000007;
typedef long long ll;

int main()
{
  int T;
  scanf("%d", &T);

  ll a, w, b, k, c;
  while (T--)
  {
    scanf("%lld %lld %lld %lld %lld", &a, &w, &b, &k, &c);
    // (ab) % m
    // = (a % m)(b % m)
    printf("%lld\n", (((a * w % MOD) * w % MOD) * w % MOD + (b * k % MOD) * k % MOD + c) % MOD);
  }
  return 0;
}