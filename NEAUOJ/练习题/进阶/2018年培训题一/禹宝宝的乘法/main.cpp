#include <iostream>

using namespace std;

typedef long long LL;

const int MOD = 1000000007;

int main() {
  int T;
  scanf("%d", &T);

  while (T--) {
    // 注意变量的作用范围 ->
    // 是每一次循环都使用相同的变量
    // 还是每一次循环使用不同的变量
    LL res = 1, num;
    for (int i = 0; i < 4; ++i) {
      scanf("%lld", &num);
      res = res * num % MOD;
    }
    printf("%lld\n", res % MOD);
  }
  return 0;
}