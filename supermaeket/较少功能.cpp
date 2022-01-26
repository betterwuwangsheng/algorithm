#include <stdio.h>
#include <windows.h>
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

//定义商品数量最大值
const int MAXN = 100;

enum category
{
  computer,
  phone,
  clothes,
  food,
  book,
  shoe,
  daily
};

//定义商品结构体
typedef struct Goods
{
  // id
  int id;
  //商品名称
  char name[100];
  //商品价格
  float price;
  //商品分类
  category categ;
} goods;

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

//标题
void display_head()
{
  cout << "序号\t";
  cout << "商品名称\t\t";
  cout << "价格\t\t";
  cout << "分类\t\n";
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
//退出程序
void exist_program()
{
  Sleep(50);
  printf("您已经成功退出本系统，欢迎再次使用！！！");
  system("pause");
  exit(0);
}
int main()
{
  do
  {
    //展示主菜单
    display_main_menu();

    int input;
    input = check_input_data(1, 8);
    switch (input)
    {
    case 8:
      exist_program();
      break;
    default:
      break;
    }
  } while (true);

  return 0;
}
