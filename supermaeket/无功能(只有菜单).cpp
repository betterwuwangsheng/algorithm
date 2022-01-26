#include <stdio.h>
#include <windows.h>
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

//判断是否合法
bool is_illgal(int data, int low, int high)
{
  if (data < low || data > high)
  {
    cout << "序号输入错误！\n请重新输入序号：";
    return true;
  }
  else
  {
    return false;
  }
}

//检查数据输入(功能菜单选择)是否正确
int check_input_data(int low, int high)
{
  int input;
  do
  {
    cin >> input;
  } while (is_illgal(input, low, high));
  return input;
}

//展示主菜单
void display_main_menu()
{
  printf("\t*********** 功能菜单 ***********\n");
  printf("\t|\t1. 展示鞋子分类.\t|\n");
  printf("\t|\t2. 展示电脑分类.\t|\n");
  printf("\t|\t3. 展示手机分类.\t|\n");
  printf("\t|\t4. 展示食品分类.\t|\n");
  printf("\t|\t5. 展示服饰分类.\t|\n");
  printf("\t|\t6. 展示日需分类.\t|\n");
  printf("\t|\t7. 展示书籍分类.\t|\n");
  printf("\t|\t8. 结束.\t\t|\n");
  printf("\t********************************\n");
  printf("\t功能选择(输入对应数字进行选择): ");
}
int main()
{

  //展示主菜单
  display_main_menu();

  return 0;
}
