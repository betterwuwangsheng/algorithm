#include <stdio.h>
#include <windows.h>
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

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
int main()
{

  //չʾ���˵�
  display_main_menu();

  return 0;
}
