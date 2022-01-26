#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 660

typedef struct
{
  char word[64];
  char meaning[128];
} node;

node dict[N];

int binarysearch(int low, int high, char *key)
{
  //key为输入的单词
  int mid = 0;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (strcmp(key, dict[mid].word) == 0)
    {
      //匹配成功
      return mid;
    }
    else if (strcmp(key, dict[mid].word) > 0)
    {
      //key大于当前匹配到的单词，则从该单词开始的后一部分继续匹配
      low = mid + 1;
    }
    else
    {
      //key小于当前匹配到的单词，则从该单词开始的前一部分继续匹配
      high = mid - 1;
    }
  }
  return -1; //匹配不到返回-1
}

void find(char word[64], int n)
{
  int dect = binarysearch(0, n - 1, word); //二分查找模块返回值
  if (dect != -1)
  {
    printf("\t%s\n", dict[dect].meaning); //输出匹配的单词解释
  }
  else
  {
    printf("无匹配单词！\n");
  }
}

//从 data.txt 文件读取航班信息
int read_info_from_text()
{
  //指向文件的指针
  FILE *fp;

  //打开文件
  if ((fp = fopen("ex08.txt", "rb")) == NULL)
  {
    //打开失败
    printf("打开 ex08.txt 文件失败!\n");
    return -1; //退出
  }

  printf("********** 打开文件成功!");
  //读入记录数
  int n;
  fscanf(fp, "%d", &n);
  char item[64];

  //安输入格式读取数据
  for (int i = 0; i < n; ++i)
  {
    //读入单词
    fscanf(fp, "%s %s", dict[i].word, dict[i].meaning);
  }

  //关闭文件
  fclose(fp);
  return n;
}

// void readdict(char dictname[])
// {
//   char item[64];
//   int i;
//   FILE *f = fopen(dictname, "r");
//   for (i = 0; i < N; ++i)
//   { //N为单词文件ps_ec.txt的长度
//     fscanf(f, "%s", dict[i].word);
//     while (fscanf(f, "%s", item), isalpha(item[0]) > 0)
//     {                            //isalpha()判断输入的是字母
//       strcat(dict[i].word, " "); //字符串拼接
//       strcat(dict[i].word, item);
//     }
//     strcpy(dict[i].meaning, item); //单词中文解释
//   }
//   fclose(f);
// }

int main()
{
  char word[64];
  int n = read_info_from_text(); //读取单词文件
  while (fgets(word, 63, stdin) > 0)
  {
    printf("%s", word);
    //fgets(输入的单词，限定长度，标准输入)
    word[strlen(word) - 1] = '\0'; //去掉换行符
    find(word, n);                 //调用查找模块
  }
  return 0;
}
