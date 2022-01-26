#include <algorithm>
#include <iostream>

using namespace std;

struct Problem_Answer
{
  string s;
  string ans;
} pro_ans[106];

struct Problem
{
  string s;
  string ans1;
  string ans2;
  string ans3;
  string ans4;
} p[106];

int main()
{
  int n, q;
  cin >> n >> q;

  for (int i = 0; i < n; ++i)
  {
    cin >> pro_ans[i].s >> pro_ans[i].ans;
  }

  for (int i = 0; i < q; ++i)
  {
    cin >> p[i].s >> p[i].ans1 >> p[i].ans2 >> p[i].ans3 >> p[i].ans4;
    if(p[i].s == pro_ans->s)

  }
  return 0;
}