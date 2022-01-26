#include <bits/stdc++.h>

using namespace std;

const int N = 4;

/* 打印 */
void print(int A[], int m)
{
  printf("\n");
  for (int i = 0; i < m; i++)
  {
    printf("%d\t", A[i]);
  }
  printf("\n");
}

/* 查找数组中的最小值 */
void findMin(int A[], int &i)
{
  // i 初始化为 A[0] 的值
  i = A[0];

  // 取 i 的十位上的数字作为循环遍历，与 N 作比较
  // 其实这里的 i 不仅暂存数组中某一位置上的值，还起到一个遍历数组的作用
  while (i / 10 < N)
  {
    // 取 i 的个位上的数字与 A[i/10] 中的各数值作比较
    // 相当于 i 从 0 -> 1 -> 2 ->....-> N- 1
    if (i % 10 > A[i / 10])
    {

      // 其实这一行的作用是消除前一个最小值的信息，即将个位上的数字归零然后再放入新的数字
      i = i - i % 10;

      // 如果 i 的个位上的数字大于 A[i/10] 中数字，则将 i 的个位上的数字换成 A[i/10]
      i = i + A[i / 10];
    }

    // i 的十位上的数字加 1 ，即对 A[] 中的下一个数字进行检测
    i += 10;
  }
  i = i % 10; // 将 i 更新为 i 的个位上的数字，即最小值
}
int main()
{
  //数组存储的是个位(一位)的正整数
  int A[] = {3, 9, 6, 1};
  int len = 4;
  print(A, len); // 打印顺序表

  int min;
  findMin(A, min);
  printf("min=%d", min);

  return 0;
}