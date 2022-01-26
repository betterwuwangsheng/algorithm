#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

//定义最大记录数
#define MAXN 100

//航班信息结构体
typedef struct flight_info
{

  //航班号
  char flight_number[10];

  //起点站
  char from[10];

  //终点站
  char to[10];

  //班期
  char schedule[10];

  //起飞时间
  char departure_time[10];

  //到达时间
  char arrive_time[10];

  //机型
  char type[10];

  //票价
  float price;
} FLIGHT_INFO;

//比较起飞时间
int cmp_price(const void *a, const void *b)
{
  return (*(struct flight_info *)a).price > (*(struct flight_info *)b).price ? 1 : -1;
}

//判断是否合法
int is_illgal(int data, int low, int high)
{
  if (data < low || data > high)
  {
    printf("序号输入错误！\n请重新输入序号：");
    return 1;
  }
  else
  {
    return 0;
  }
}

//检查数据输入(功能菜单选择)是否正确
int check_input_data(int low, int high)
{
  int input;
  do
  {
    scanf("%d", &input);
  } while (is_illgal(input, low, high));
  return input;
}

//显示标题
void display_info_title()
{
  printf("\n航班号    起点站          终点站          班期        起飞时间        到达时间        机型        票价\n");
}

//显示指定的一条记录
void display_one_flight_info(FLIGHT_INFO f)
{
  display_info_title();
  printf("%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g\n", f.flight_number, f.from, f.to, f.schedule, f.departure_time, f.arrive_time, f.type, f.price);
}

//显示菜单
void dispaly_menu()
{
  printf("\n-----------------------------------------------------\n");
  printf("*                  欢迎使用本系统                   *\n");
  printf("-----------------------------------------------------\n");
  printf("*                  1.输入航班信息                   *\n");
  printf("*                  2.显示全部航班信息               *\n");
  printf("*                  3.根据航班号查询                 *\n");
  printf("*                  4.根据起点站查询                 *\n");
  printf("*                  5.根据终点站查询                 *\n");
  printf("*                  6.根据起飞时间查询               *\n");
  printf("*                  7.根据达到时间查询               *\n");
  printf("*                  8.按照价格排序(升序)             *\n");
  printf("*                  0.退出(自动保存)                 *\n");
  printf("-----------------------------------------------------\n\n");
  printf("<0-8>号服务项目(请输入对应数字进行选择): ");
}

//根据航班号查找函数，参数为记录数组和记录条数以及航班号
int find_index_of_flight_info(FLIGHT_INFO f[], int n, char *flight_num)
{
  int index;
  for (index = 0; index < n; ++index)
  {
    //记录中的航班号和待比较的航班号是否相同(不区分大小写)
    if (strcmpi(flight_num, f[index].flight_number) == 0)
      return index; //相等，则返回该记录的下标号，程序提前结束
  }
  //返回 i 值
  return index;
}

//保存航班信息
void save_flight_info(FLIGHT_INFO f[], int n)
{
  //指向文件的指针
  FILE *fp;

  //打开失败
  if ((fp = fopen("data.txt", "wb")) == NULL)
  {
    //打开失败
    printf("打开 data.txt 文件失败!\n");

    //退出
    return;
  }

  printf("\n****** 航班信息正在保存中 ******\n");

  //将记录数写入文件
  fprintf(fp, "%d", n);

  //将换行符号写入文件
  fprintf(fp, "\r\n");

  for (int i = 0; i < n; ++i)
  {
    //写入记录
    fprintf(fp, "%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g", f[i].flight_number, f[i].from, f[i].to, f[i].schedule, f[i].departure_time, f[i].arrive_time, f[i].type, f[i].price);
    fprintf(fp, "\r\n"); //将换行符号写入文件
  }

  //关闭文件
  fclose(fp);

  printf("****** 保存中 ******\n");
  for (int j = 0; j < 32; ++j)
  {
    //输出保存动效
    printf(">");
    Sleep(50);
  }

  //显示保存成功
  printf("\n****** 航班信息信息保存成功！ ******\n");
}

//从 data.txt 文件读取航班信息
int read_info_from_data_text(FLIGHT_INFO f[])
{
  //指向文件的指针
  FILE *fp;

  //打开文件
  if ((fp = fopen("data.txt", "rb")) == NULL)
  {
    //打开失败
    printf("打开 data.txt 文件失败!\n");
    return -1; //退出
  }

  //读入记录数
  int n;
  fscanf(fp, "%d", &n);

  //安输入格式读取数据
  for (int i = 0; i < n; ++i)
    //按格式读入记录
    fscanf(fp, "%10s%16s%16s%12s%16s%16s%12s%g", &f[i].flight_number, &f[i].from, &f[i].to, &f[i].schedule, &f[i].departure_time, &f[i].arrive_time, &f[i].type, &f[i].price);

  //关闭文件
  fclose(fp);

  //输出提示
  printf("****** 航班信息正在加载中 ******\n");
  for (int i = 0; i < 32; ++i)
  {
    //输出保存动效
    printf(">");
    Sleep(50);
  }

  //显示保存成功
  printf("\n****** 已经成功加载 data.txt 文件到内存！ ******\n");
  system("pause");

  //返回记录数
  return n;
}

//1.输入航班信息
int input_flight_info(FLIGHT_INFO f[], int n)
{
  // system("cls");
  printf("请输入航班信息条数：\n");

  int cnt;
  cnt = check_input_data(1, MAXN);
  for (int i = 0; i < cnt; ++i)
  {
    //获取航班信息
    printf("请输入航班号:");
    scanf("%s", &f[i + n].flight_number);
    printf("请输入起点站:");
    scanf("%s", &f[i + n].from);
    printf("请输入终点站:");
    scanf("%s", &f[i + n].to);
    printf("请输入班期:");
    scanf("%s", &f[i + n].schedule);
    printf("请输入起飞时间:");
    scanf("%s", &f[i + n].departure_time);
    printf("请输入到达时间:");
    scanf("%s", &f[i + n].arrive_time);
    printf("请输入机型:");
    scanf("%s", &f[i + n].type);
    printf("请输入票价:");
    scanf("%f", &f[i + n].price);
    getchar();
  }
  printf("\n****** 输入航班信息成功！ ******\n\n");
  return n + cnt; //返回新的记录条数
}

//2.显示全部航班信息
void display_flight_info(FLIGHT_INFO f[], int n)
{
  //标题
  display_info_title();

  //输出航班信息
  for (int i = 0; i < n; ++i)
  {
    printf("%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g\n", f[i].flight_number, f[i].from, f[i].to, f[i].schedule, f[i].departure_time, f[i].arrive_time, f[i].type, f[i].price);
  }
}

//3.根据航班号查询
void search_info_by_flight_number(FLIGHT_INFO f[], int len)
{

  //定义航班号字符串
  char flight_num[10];
  printf("请输入要查询的航班号<字母可以不区分大小写>: ");

  //输入待查找航班信息的航班号
  scanf("%s", &flight_num);

  //消除回车键影响
  getchar();

  //记录数量
  int cnt = 0;

  //标题
  display_info_title();
  for (int i = 0; i < len; ++i)
  {
    //记录中的航班号和待比较的航班号是否相同(不区分大小写)
    if (strcmpi(flight_num, f[i].flight_number) == 0)
    {
      //数量增加
      cnt++;
      printf("%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g\n", f[i].flight_number, f[i].from, f[i].to, f[i].schedule, f[i].departure_time, f[i].arrive_time, f[i].type, f[i].price);
    }
  }

  //没找到
  if (cnt == 0)
    printf("\n****** 没有航班号为 %s 的航班信息！ ******\n", flight_num);
}

//4.根据起点站查询
void search_info_by_flight_from(FLIGHT_INFO f[], int len)
{
  //定义起点站字符串
  char from[10];
  printf("请输入要查询的航班的起点站: ");

  //输入待查找航班信息的起点站
  scanf("%s", &from);

  //消除回车键影响
  getchar();

  //记录数量
  int cnt = 0;

  //标题
  display_info_title();
  for (int i = 0; i < len; ++i)
  {
    //记录中的起点站和待比较的起点站是否相同
    if (strcmp(from, f[i].from) == 0)
    {
      cnt++;
      printf("%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g\n", f[i].flight_number, f[i].from, f[i].to, f[i].schedule, f[i].departure_time, f[i].arrive_time, f[i].type, f[i].price);
    }
  }

  //没找到
  if (cnt == 0)
    printf("\n****** 没有起点站为 %s 的航班信息！ ******\n", from);
}

//5.根据终点站查询
void search_info_by_flight_to(FLIGHT_INFO f[], int len)
{
  //定义终点站字符串
  char to[10];
  printf("请输入要查询的航班的终点站: ");

  //输入待查找航班信息的终点站
  scanf("%s", &to);

  //消除回车键影响
  getchar();

  //记录数量
  int cnt = 0;

  //标题
  display_info_title();
  for (int i = 0; i < len; ++i)
  {
    //记录中的终点站和待比较的终点站是否相同
    if (strcmp(to, f[i].to) == 0)
    {
      cnt++;
      printf("%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g\n", f[i].flight_number, f[i].from, f[i].to, f[i].schedule, f[i].departure_time, f[i].arrive_time, f[i].type, f[i].price);
    }
  }

  //没找到
  if (cnt == 0)
    printf("\n****** 没有终点站为 %s 的航班信息！ ******\n", to);
}

//6.根据起飞时间查询
void search_info_by_flight_departure_time(FLIGHT_INFO f[], int len)
{
  //定义起飞时间字符串
  char departure_time[10];
  printf("请输入要查询的航班的起飞时间(使用英文状态下的:分隔): ");

  //输入待查找航班信息的起飞时间
  scanf("%s", &departure_time);

  //消除回车键影响
  getchar();

  //记录数量
  int cnt = 0;

  //标题
  display_info_title();
  for (int i = 0; i < len; ++i)
  {
    //记录中的起飞时间和待比较的起飞时间是否相同
    if (strcmp(departure_time, f[i].departure_time) == 0)
    {
      cnt++;
      printf("%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g\n", f[i].flight_number, f[i].from, f[i].to, f[i].schedule, f[i].departure_time, f[i].arrive_time, f[i].type, f[i].price);
    }
  }

  //没找到
  if (cnt == 0)
    printf("\n****** 没有起飞时间为 %s 的航班信息！ ******\n", departure_time);
}

//7.根据到达时间查询
void search_info_by_flight_arrive_time(FLIGHT_INFO f[], int len)
{
  //定义起点站字符串
  char arrive_time[10];
  printf("请输入要查询的航班的到达时间: ");

  //输入待查找航班信息的到达时间
  scanf("%s", &arrive_time);

  //消除回车键影响
  getchar();

  //记录数量
  int cnt = 0;

  //标题
  display_info_title();
  for (int i = 0; i < len; ++i)
  {
    //记录中的到达时间和待比较的到达时间是否相同
    if (strcmp(arrive_time, f[i].arrive_time) == 0)
    {
      cnt++;
      printf("%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g\n", f[i].flight_number, f[i].from, f[i].to, f[i].schedule, f[i].departure_time, f[i].arrive_time, f[i].type, f[i].price);
    }
  }
  //没找到
  if (cnt == 0)
    printf("\n****** 没有到达时间为 %s 的航班信息！ ******\n", arrive_time);
}

//8.根据起飞时间排序
void sort_flight_info_by_price(FLIGHT_INFO f[], int n)
{
  //排序
  qsort(f, n, sizeof(f[0]), cmp_price);

  //标题
  display_info_title();

  //输出航班信息
  for (int i = 0; i < n; ++i)
  {
    printf("%-10s%-16s%-16s%-12s%-16s%-16s%-12s%g\n", f[i].flight_number, f[i].from, f[i].to, f[i].schedule, f[i].departure_time, f[i].arrive_time, f[i].type, f[i].price);
  }
}

//退出程序
void exit_program(FLIGHT_INFO f[], int n)
{
  //退出前保存航班信息
  save_flight_info(f, n);

  //等候
  Sleep(50);
  printf("****** 您已经成功退出本系统，欢迎再次使用！！！ ******\n\n");
  system("pause");
  exit(0);
}

int main()
{
  //定义结构体数组(航班信息)
  FLIGHT_INFO f[MAXN];

  //航班信息数量
  int len;

  //加载 data.txt 文件
  len = read_info_from_data_text(f);
  do
  {
    //显示菜单
    dispaly_menu();

    int input;
    input = check_input_data(0, 8);

    system("cls");
    switch (input)
    {
    case 1:
      len = input_flight_info(f, len);
      break;
    case 2:
      //展示航班信息
      display_flight_info(f, len);
      break;
    case 3:
      search_info_by_flight_number(f, len);
      break;
    case 4:
      search_info_by_flight_from(f, len);
      break;
    case 5:
      search_info_by_flight_to(f, len);
      break;
    case 6:
      search_info_by_flight_departure_time(f, len);
      break;
    case 7:
      search_info_by_flight_arrive_time(f, len);
      break;
    case 8:
      sort_flight_info_by_price(f, len);
      break;
    case 0:
      //退出程序
      exit_program(f, len);
      break;
    default:
      break;
    }
  } while (1);

  return 0;
}
