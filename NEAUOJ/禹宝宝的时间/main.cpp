#include <iostream>

using namespace std;

int main() {
  int T;
  scanf("%d", &T);

  int h, m, s;
  while (T--) {
    scanf("%d:%d:%d", &h, &m, &s);
    printf("%d\n", h * 3600 + m * 60 + s);
  }
  return 0;
}