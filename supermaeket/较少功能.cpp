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
  do
  {
    //չʾ���˵�
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
