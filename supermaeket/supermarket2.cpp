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
}

//判断是否合法
bool is_illgal(int data, int low, int high)
{
}

//检查数据输入(功能菜单选择)是否正确
int check_input_data(int low, int high)
{
}

//标题
void display_head()
{
}

//展示主菜单
void display_main_menu()
{
}
//展示各个分类
void display_shoes(goods g[], int number)
{
}
void display_computer(goods g[], int number)
{
}
void display_phones(goods g[], int number)
{
}
void display_foods(goods g[], int number)
{
}
void display_clothes(goods g[], int number)
{
}
void display_daily(goods g[], int number)
{
}
void display_books(goods g[], int number)
{
}
//退出程序
void exist_program()
{
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
