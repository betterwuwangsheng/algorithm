#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

#define L 50 /*定义哈希表长*/
#define M 47 /*定义p值*/
#define N 30 /*定义名单长*/
char z[22];
struct old
{
  char *name;
  char *py;
  int k;
};
struct old oldlist[L]; /*原始表*/
struct hterm
{
  char *name;
  char *py;
  int k;
  int si;
};
struct hterm hlist[L]; /*哈希表*/
int i, adr, sum, d;
char ch1;
float average;
/**********************************/
void chash()
{
  for (i = 0; i < L; i++)
  {
    hlist[i].name = "";
    hlist[i].py = "";
    hlist[i].k = 0;
    hlist[i].si = 0;
  };
  for (i = 0; i < N; i++)
  {
    sum = 0;
    adr = (oldlist[i].k) % M;
    d = adr;
    if (hlist[adr].si == 0)
    {
      hlist[adr].k = oldlist[i].k;
      hlist[adr].name = oldlist[i].name;
      hlist[adr].py = oldlist[i].py;
      hlist[adr].si = 1;
    }
    else
    {
      do
      {
        d = (d + ((oldlist[i].k)) % 10 + 1) % M; /*伪随机*/
        sum = sum + 1;
      } while (hlist[d].k != 0);
      hlist[d].k = oldlist[i].k;
      hlist[d].name = oldlist[i].name;
      hlist[d].py = oldlist[i].py;
      hlist[d].si = sum + 1;
    }
  }
}
/***************************************/
void findhlist()
{
  int s0;
  char r, g;
  system("cls"); /*清屏*/
  for (r = 0; r < 20; r++)
  {
    z[r] = 0;
  };
  gotoxy(1, 1);
  printf("RESEARCH.....");
  gotoxy(5, 10);
  printf("input the spell of name: ");
  gotoxy(5, 12);
  scanf("%s", z);
  s0 = 0;
  for (r = 0; r < 20; r++)
  {
    s0 = z[r] + s0;
  };
  gotoxy(5, 13);
  printf("%d", s0);
  /*for (i=0;i<L;i++)*/
  sum = 1;
  adr = s0 % M;
  d = adr;
  if (hlist[adr].k == s0)
  {
    gotoxy(18, 18);
    printf(" ");
    gotoxy(18, 18);
    printf(" %s", hlist[d].name);
    gotoxy(18, 19);
    printf("%s", hlist[d].py);
    gotoxy(18, 20);
    printf(" find %d times", sum);
    getch();
  }
  else
  {
    if (hlist[adr].k == 0)
    {
      gotoxy(18, 18);
      printf("nothing about it!");
      getch();
    }
    else
    {
      g = 0;
      for (i = 0; g == 0; i++)
      {
        d = (d + s0 % 10 + 1) % M; /*伪随机*/
        sum = sum + 1;
        if (hlist[d].k == 0)
        {
          gotoxy(18, 18);
          printf("nothing about it!");
          g = 1;
          getch();
        };
        gotoxy(18, 18);
        printf("%s", hlist[d].name);
        gotoxy(18, 19);
        printf("%s", hlist[d].py);
        gotoxy(18, 20);
        printf("find%d times", sum);
        getch();
        if (hlist[d].k == s0)
        {
          g = 1;
          gotoxy(18, 21);
          printf("find %d times until success!", sum);
          getch();
        };
      };
    };
  };
}
/***************************************/
void inp() /*输入表*/
{
  char *f;
  int r, s0;
  oldlist[0].name = "A";
  oldlist[0].py = "apple";
  oldlist[1].name = "B";
  oldlist[1].py = "bus";
  oldlist[2].name = "C";
  oldlist[2].py = "cat";
  oldlist[3].name = "D";
  oldlist[3].py = "dog";
  oldlist[5].name = "E";
  oldlist[5].py = "egg";
  oldlist[6].name = "F";
  oldlist[6].py = "fly";
  oldlist[7].name = "G";
  oldlist[7].py = "good";
  oldlist[8].name = "H";
  oldlist[8].py = "hurt";
  oldlist[9].name = "I";
  oldlist[9].py = "int";
  oldlist[10].name = "J";
  oldlist[10].py = "joy";
  oldlist[11].name = "K";
  oldlist[11].py = "keep";
  oldlist[12].name = "L";
  oldlist[12].py = "long";
  oldlist[13].name = "M";
  oldlist[13].py = "make";
  oldlist[14].name = "N";
  oldlist[14].py = "net";
  oldlist[15].name = "O";
  oldlist[15].py = "out";
  oldlist[16].name = "P";
  oldlist[16].py = "pour";
  oldlist[17].name = "Q";
  oldlist[17].py = "queen";
  oldlist[18].name = "R";
  oldlist[18].py = "run";
  oldlist[19].name = "S";
  oldlist[19].py = "sun";
  oldlist[20].name = "T";
  oldlist[20].py = "tea";
  oldlist[21].name = "U";
  oldlist[21].py = "until";
  oldlist[22].name = "V";
  oldlist[22].py = "vection";
  oldlist[23].name = "W";
  oldlist[23].py = "water";
  oldlist[24].name = "X";
  oldlist[24].py = "xray";
  oldlist[25].name = "Y";
  oldlist[25].py = "you";
  oldlist[26].name = "Z";
  oldlist[26].py = "zoo";
  oldlist[27].name = "AA";
  oldlist[27].py = "aah";
  oldlist[28].name = "BB";
  oldlist[28].py = "bbc";
  oldlist[29].name = "CC";
  oldlist[29].py = "cch";
  /*请在此输入数据,同时修改程序开头的M L N*/
  for (i = 0; i < N; i++)
  {
    s0 = 0;
    f = oldlist[i].py;
    for (r = 0; *(f + r) != '\0'; r++)
    {
      s0 = *(f + r) + s0;
    };
    oldlist[i].k = s0;
  };
}
/****************************************/
void dhash() /*显示哈希表*/
{
  char LON = 17;
  system("cls");
  if (LON > L)
  {
    LON = L;
  };
  gotoxy(1, 1);
  printf("HashTable: ");
  gotoxy(1, 2);
  printf("address: ");
  for (i = 0; i < LON; i++)
  {
    gotoxy(1, i + 3);
    printf("%-3d", i);
  };
  gotoxy(9, 2);
  printf("the H(key)is: ");
  for (i = 0; i < LON; i++)
  {
    gotoxy(10, i + 3);
    printf("%-6d", hlist[i].k);
  };
  gotoxy(19, 2);
  printf("name: ");
  for (i = 0; i < LON; i++)
  {
    gotoxy(19, 3 + i);
    printf("%s", hlist[i].name);
  };
  gotoxy(28, 2);
  printf("spell: ");
  for (i = 0; i < LON; i++)
  {
    gotoxy(28, i + 3);
    printf("%s", hlist[i].py);
  };
  gotoxy(40, 2);
  printf("the length: ");
  for (i = 0; i < LON; i++)
  {
    gotoxy(43, i + 3);
    printf("%2d", hlist[i].si);
  };
  gotoxy(53, 2);
  printf("H(key): ");
  for (i = 0; i < LON; i++)
  {
    gotoxy(53, i + 3);
    printf("%2d", (hlist[i].k) % M);
  };
  average = 0;
  for (i = 0; i < L; i++)
  {
    average = average + hlist[i].si;
  };
  average = average / N;
  gotoxy(10, 23);
  printf("ASL:ASL(%d)=%f", N, average);
  gotoxy(20, 24);
  printf("any key to pass");
  ch1 = getch();
  if (L > 15)
  {
    system("cls");
    if (LON > L - 15)
    {
      LON = L - 15;
    };
    gotoxy(1, 1);
    printf("HashTable: ");
    gotoxy(1, 2);
    printf("address: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(1, i + 3);
      printf("%-3d", i + 15);
    };
    gotoxy(9, 2);
    printf("the H(key) is: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(10, i + 3);
      printf("%-6d", hlist[i + 15].k);
    };
    gotoxy(19, 2);
    printf("name: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(19, 3 + i);
      printf("%s", hlist[i + 15].name);
    };
    gotoxy(28, 2);
    printf("spell: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(28, i + 3);
      printf("%s", hlist[i + 15].py);
    };
    gotoxy(40, 2);
    printf("the length: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(43, i + 3);
      printf("%2d", hlist[i + 15].si);
    };
    gotoxy(53, 2);
    printf("H(key):");
    for (i = 0; i < LON; i++)
    {
      gotoxy(53, i + 3);
      printf("%2d", (hlist[i + 15].k) % M);
    };
    average = 0;
    for (i = 0; i < L; i++)
    {
      average = average + hlist[i].si;
    };
    average = average / N;
    gotoxy(10, 23);
    printf("ASL:ASL(%d)=%f", N, average);
    gotoxy(20, 24);
    printf("any key to pass ");
    ch1 = getch();
  };
  if (L > 30)
  {
    system("cls");
    if (LON > L - 30)
    {
      LON = L - 30;
    };
    gotoxy(1, 1);
    printf("HashTable: ");
    gotoxy(1, 2);
    printf("address: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(1, i + 3);
      printf("%-3d", i + 30);
    };
    gotoxy(9, 2);
    printf("the H(key) is: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(10, i + 3);
      printf("%-6d", hlist[i + 30].k);
    };
    gotoxy(19, 2);
    printf("name: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(19, 3 + i);
      printf("%s", hlist[i + 30].name);
    };
    gotoxy(28, 2);
    printf("spell: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(28, i + 3);
      printf("%s", hlist[i + 30].py);
    };
    gotoxy(40, 2);
    printf("the length: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(43, i + 3);
      printf("%2d", hlist[i + 30].si);
    };
    gotoxy(53, 2);
    printf("H(key):");
    for (i = 0; i < LON; i++)
    {
      gotoxy(53, i + 3);
      printf("%2d", (hlist[i + 30].k) % M);
    };
    average = 0;
    for (i = 0; i < L; i++)
    {
      average = average + hlist[i].si;
    };
    average = average / N;
    gotoxy(10, 23);
    printf("ASL:ASL(%d)=%f", N, average);
    gotoxy(20, 24);
    printf("any key to pass ");
    ch1 = getch();
  };
  if (L > 45)
  {
    system("cls");
    if (LON > L - 45)
    {
      LON = L - 45;
    };
    gotoxy(1, 1);
    printf("HashTable: ");
    gotoxy(1, 2);
    printf("address: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(1, i + 3);
      printf("%-3d", i + 45);
    };
    gotoxy(9, 2);
    printf("the H(key) is: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(10, i + 3);
      printf("%-6d", hlist[i + 45].k);
    };
    gotoxy(19, 2);
    printf("name: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(19, 3 + i);
      printf("%s", hlist[i + 45].name);
    };
    gotoxy(28, 2);
    printf("spell: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(28, i + 3);
      printf("%s", hlist[i + 45].py);
    };
    gotoxy(40, 2);
    printf("the length: ");
    for (i = 0; i < LON; i++)
    {
      gotoxy(43, i + 3);
      printf("%2d", hlist[i + 45].si);
    };
    gotoxy(53, 2);
    printf("H(key):");
    for (i = 0; i < LON; i++)
    {
      gotoxy(53, i + 3);
      printf("%2d", (hlist[i + 45].k) % M);
    };
    average = 0;
    for (i = 0; i < L; i++)
    {
      average = average + hlist[i].si;
    };
    average = average / N;
    gotoxy(10, 23);
    printf("ASL:ASL(%d)=%f", N, average);
    gotoxy(20, 24);
    printf("any key to pass! ");
    ch1 = getch();
  };
}
/**************************************/
void main()
{
  inp();   /*输入原表*/
  chash(); /*建哈希表*/
a:
  system("cls");
  gotoxy(21, 2);
  printf("**************************************\n");
  printf("Welcome to use!\n");
  printf("\n");
  gotoxy(22, 4);
  printf("1.Print the HashTable.");
  printf("\n");
  gotoxy(22, 6);
  printf("2.Research.");
  printf("\n");
  gotoxy(22, 8);
  printf("3. Exit");
  printf("\n");
  gotoxy(22, 12);
  printf("**************************************\n");
  printf(" \nYour choice is :");
  printf("\n");
  gotoxy(24, 14);
  ch1 = getch();
  if (ch1 == 0x33)
  {
    printf("Thank you for your using");
    printf("\n");
    getch();
    exit();
  }; /*"x":退出*/
  if (ch1 == 0x31)
  {
    dhash();
  }; /*表的属性*/
  if (ch1 == 0x32)
  {
    findhlist();
  }; /*查找*/
  goto a;
}