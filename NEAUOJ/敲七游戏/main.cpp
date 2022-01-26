#include <iostream>
#include <vector>

using namespace std;

// 获取每一个位置上的数字
vector<int> getEveryNum(int num) {
  vector<int> t;
  while (num) {
    int temp = num % 10;
    t.push_back(temp);
    num /= 10;
  }
  return t;
}

// 判断是否有 7
bool check(vector<int> &v) {
  vector<int>::iterator it;
  int cnt = 0;
  for (it = v.begin(); it != v.end(); ++it) {
    if (*it == 7) cnt++;
  }
  return cnt ? true : false;
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int l, r;
    scanf("%d%d", &l, &r);

    for (int i = l; i <= r; ++i) {
      vector<int> res = getEveryNum(i);

      bool flag = check(res);
      if (flag || i % 7 == 0) {
        if (i == r) {
          printf("1");
        } else {
          printf("1 ");
        }
      } else {
        if (i == r) {
          printf("0");
        } else {
          printf("0 ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}