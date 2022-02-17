#include <iostream>

using namespace std;

typedef long long LL;

int main() {
  int n;
  LL k;
  scanf("%d %lld", &n, &k);

  LL num, res = 1;
  while (n--) {
    scanf("%lld", &num);
    res = res * (num % k) % k;
  }
  printf("%lld", res % k);
  return 0;
}