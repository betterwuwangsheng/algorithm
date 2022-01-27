#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// 定义点的坐标结构体
struct Point
{
  int x, y, z;

  // 重定义小于符号
  bool operator<(const Point &a) const
  {
    return z < a.z;
  }

  // 重定义减号
  double operator-(const Point &a) const
  {
    return sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y) + (z - a.z) * (z - a.z));
  }
} p[500003];

double ans = 0;
int main()
{
  int N;
  cin >> N;

  for (int i = 0; i < N; ++i)
    cin >> p[i].x >> p[i].y >> p[i].z;

  // 排序
  sort(p, p + N);

  for (int i = 1; i < N; ++i)
    ans += p[i] - p[i - 1];
  printf("%.3lf", ans);
}