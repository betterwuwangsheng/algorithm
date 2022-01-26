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

//将分类转为字符串
static const string enum_to_string[] = {"电脑", "手机", "服饰", "食品",
                                        "书籍", "鞋子", "日需"};

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

string get_text_enum_to_string(int enumVal)
{
  return enum_to_string[enumVal];
}

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
//展示各个分类
void display_shoes(goods g[], int number)
{
  display_head();
  //获取鞋子分类数据数量
  for (int i = 0; i < number; ++i)
  {
    if (g[i].categ == (category)shoe)
    {
      cout << g[i].id << "\t";
      cout << g[i].name << "\t\t\t";
      cout << fixed << setprecision(2) << g[i].price << "\t\t";
      cout << get_text_enum_to_string(g[i].categ) << endl;
    }
  }
}
void display_computer(goods g[], int number)
{
  display_head();
  //获取鞋子分类数据数量
  for (int i = 0; i < number; ++i)
  {
    if (g[i].categ == (category)computer)
    {
      cout << g[i].id << "\t";
      cout << g[i].name << "\t\t";
      cout << fixed << setprecision(2) << g[i].price << "\t\t";
      cout << get_text_enum_to_string(g[i].categ) << endl;
    }
  }
}
void display_phones(goods g[], int number)
{
  display_head();
  //获取鞋子分类数据数量
  for (int i = 0; i < number; ++i)
  {
    if (g[i].categ == (category)phone)
    {
      cout << g[i].id << "\t";
      cout << g[i].name << "\t\t";
      cout << fixed << setprecision(2) << g[i].price << "\t\t";
      cout << get_text_enum_to_string(g[i].categ) << endl;
    }
  }
}
void display_foods(goods g[], int number)
{
  display_head();
  //获取鞋子分类数据数量
  for (int i = 0; i < number; ++i)
  {
    if (g[i].categ == (category)food)
    {
      cout << g[i].id << "\t";
      cout << g[i].name << "\t\t";
      cout << fixed << setprecision(2) << g[i].price << "\t\t";
      cout << get_text_enum_to_string(g[i].categ) << endl;
    }
  }
}
void display_clothes(goods g[], int number)
{
  display_head();
  //获取鞋子分类数据数量
  for (int i = 0; i < number; ++i)
  {
    if (g[i].categ == (category)clothes)
    {
      cout << g[i].id << "\t";
      cout << g[i].name << "\t\t\t";
      cout << fixed << setprecision(2) << g[i].price << "\t\t";
      cout << get_text_enum_to_string(g[i].categ) << endl;
    }
  }
}
void display_daily(goods g[], int number)
{
  display_head();
  //获取鞋子分类数据数量
  for (int i = 0; i < number; ++i)
  {
    if (g[i].categ == (category)daily)
    {
      cout << g[i].id << "\t";
      cout << g[i].name << "\t\t";
      cout << fixed << setprecision(2) << g[i].price << "\t\t";
      cout << get_text_enum_to_string(g[i].categ) << endl;
    }
  }
}
void display_books(goods g[], int number)
{
  display_head();
  //获取鞋子分类数据数量
  for (int i = 0; i < number; ++i)
  {
    if (g[i].categ == (category)book)
    {
      cout << g[i].id << "\t";
      cout << g[i].name << "\t\t\t";
      cout << fixed << setprecision(2) << g[i].price << "\t\t";
      cout << get_text_enum_to_string(g[i].categ) << endl;
    }
  }
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
  goods g[] = {
      {1, "联想小新Pro14", 5499.00, computer},
      {13, "拯救者Y7000", 7499.00, computer},
      {19, "红米RedmiBook", 4499.00, computer},
      {2, "拖鞋", 13.00, shoe},
      {18, "休闲鞋", 15.00, shoe},
      {3, "人字拖", 23.90, shoe},
      {4, "卫衣", 159.00, clothes},
      {8, "衬衣", 139, clothes},
      {5, "肉松小蛋糕", 59.9, food},
      {10, "大刀肉辣条", 4.5, food},
      {6, "掌心脆干脆面", 2, food},
      {7, "沃隆每日坚果", 119, food},
      {9, "华为nova8 pro", 4399.00, phone},
      {11, "华为 mate40", 5799, phone},
      {12, "华为nova8", 3649.00, phone},
      {14, "烧纸", 44.90, book},
      {15, "呐喊", 19.90, book},
      {16, "活着", 33.00, book},
      {17, "人生", 20.00, book},

  };

  //获取商品数量
  int count_of_goods = sizeof(g) / sizeof(goods);

  do
  {
    //展示主菜单
    display_main_menu();

    int input;
    input = check_input_data(1, 8);
    switch (input)
    {
    case 1:
      display_shoes(g, count_of_goods);
      break;
    case 2:
      display_computer(g, count_of_goods);
      break;
    case 3:
      display_phones(g, count_of_goods);
      break;
    case 4:
      display_foods(g, count_of_goods);
      break;
    case 5:
      display_clothes(g, count_of_goods);
      break;
    case 6:
      display_daily(g, count_of_goods);
      break;
    case 7:
      display_books(g, count_of_goods);
      break;
    case 8:
      exist_program();
      break;
    default:
      break;
    }
  } while (true);

  return 0;
}
