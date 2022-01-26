#include <stdio.h>
#include <windows.h>
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

//������Ʒ�������ֵ
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

//������תΪ�ַ���
static const string enum_to_string[] = {"����", "�ֻ�", "����", "ʳƷ",
                                        "�鼮", "Ь��", "����"};

//������Ʒ�ṹ��
typedef struct Goods
{
  // id
  int id;
  //��Ʒ����
  char name[100];
  //��Ʒ�۸�
  float price;
  //��Ʒ����
  category categ;
} goods;

string get_text_enum_to_string(int enumVal)
{
  return enum_to_string[enumVal];
}

//�ж��Ƿ�Ϸ�
bool is_illgal(int data, int low, int high)
{
  if (data < low || data > high)
  {
    cout << "����������\n������������ţ�";
    return true;
  }
  else
  {
    return false;
  }
}

//�����������(���ܲ˵�ѡ��)�Ƿ���ȷ
int check_input_data(int low, int high)
{
  int input;
  do
  {
    cin >> input;
  } while (is_illgal(input, low, high));
  return input;
}

//����
void display_head()
{
  cout << "���\t";
  cout << "��Ʒ����\t\t";
  cout << "�۸�\t\t";
  cout << "����\t\n";
}

//չʾ���˵�
void display_main_menu()
{
  printf("\t*********** ���ܲ˵� ***********\n");
  printf("\t|\t1. չʾЬ�ӷ���.\t|\n");
  printf("\t|\t2. չʾ���Է���.\t|\n");
  printf("\t|\t3. չʾ�ֻ�����.\t|\n");
  printf("\t|\t4. չʾʳƷ����.\t|\n");
  printf("\t|\t5. չʾ���η���.\t|\n");
  printf("\t|\t6. չʾ�������.\t|\n");
  printf("\t|\t7. չʾ�鼮����.\t|\n");
  printf("\t|\t8. ����.\t\t|\n");
  printf("\t********************************\n");
  printf("\t����ѡ��(�����Ӧ���ֽ���ѡ��): ");
}
//չʾ��������
void display_shoes(goods g[], int number)
{
  display_head();
  //��ȡЬ�ӷ�����������
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
  //��ȡЬ�ӷ�����������
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
  //��ȡЬ�ӷ�����������
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
  //��ȡЬ�ӷ�����������
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
  //��ȡЬ�ӷ�����������
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
  //��ȡЬ�ӷ�����������
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
  //��ȡЬ�ӷ�����������
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
//�˳�����
void exist_program()
{
  Sleep(50);
  printf("���Ѿ��ɹ��˳���ϵͳ����ӭ�ٴ�ʹ�ã�����");
  system("pause");
  exit(0);
}
int main()
{
  goods g[] = {
      {1, "����С��Pro14", 5499.00, computer},
      {2, "��Ь", 13.00, shoe},
      {4, "����", 159.00, clothes},
      {5, "����С����", 59.9, food},
      {9, "��Ϊnova8 pro", 4399.00, phone},
      {14, "��ֽ", 44.90, book},
      {15, "��ˢ",9.90, daily}
  };

  //��ȡ��Ʒ����
  int count_of_goods = sizeof(g) / sizeof(goods);

  do
  {
    //չʾ���˵�
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

