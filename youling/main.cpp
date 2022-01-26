#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;
/**
 * @brief 解决问题
 * @param distance d1 d2 ... dn  距离数组
 */
void solve(vector<int> &distance)
{
  vector<int> res;  // 初始化结果
  res.push_back(distance[0] + 400); // 将第一个摄像头的距离加入结果数组
  for (int i = 0; i < distance.size(); ++i) // 遍历距离数组
  {    
    if (res[res.size() - 1] + 400 > distance[i])  // 判断是否覆盖
      continue;
    else // 未覆盖
      res.push_back(distance[i] + 400);
  }
  // 打印结果安装摄像头的位置
  for (int i = 0; i < res.size(); ++i)
    cout << res[i] << " ";
  cout << endl;
  cout << res.size() << endl; // 输出摄像头数量
}
int main()
{
  vector<int> distance = {2, 800, 2000, 3000, 4000};
  solve(distance);
  return 0;
}
