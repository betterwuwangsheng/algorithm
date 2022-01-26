
#include <stdio.h>
#include "graphics.h"
#include "CommonData.h"
#include"BookManage.h"
#include"GuestMange.h"
#include"SearchBook.h"
#include <string.h>
#include <conio.h>
#include "Windows.h"



/*函数：void ShowHeaderOfStuOneScore()						*/
/*功能：显示书籍表头 书名、书籍代码、出版社、作者、价格		*/

void ShowHeaderOfbookInfo()
{
	cleardevice();
	setcolor(RED);	
	setfont(24, 0, "黑体");
	outtextxy(240, 10, "图书信息查询结果");
	setfont(12, 0, "宋体");
	setcolor(GREEN);
	outtextxy(10, 60, "书名");
	outtextxy(80, 60, "书籍代码");
	outtextxy(150, 60, "出版社");
	outtextxy(220, 60, "作者");
	outtextxy(270, 60, "价格");

}


/*函数：void ShowOnebookInfo(）                    		*/					
/*功能	 显示一本书籍的完整信息                            */

void showbookInfo(char bookid[],char bookname[],char bookauthor[],double bookprice)
{
	 
	bookInfor sbif,onebook;
	int isExist;
	FILE* fp;
	isExist=false;              //查找书籍基本信息，暂存到sbif中

	fp=fopen("bookInfo.dat","rb");
	while(!feof(fp))
	{
		int length=fread(&onebook,sizeof(bookInfor),1,fp);
		if(length==0)
			break;
		if(strcmp(onebook.bookid,bookid)==0)
		{
			isExist=true;
			break;
		}
	}
	fclose(fp);
	if(isExist)
		sbif=onebook;
	else
	{
		strcpy(sbif.bookid,bookid);
		strcpy(sbif.bookname,bookname);
		strcpy(sbif.bookauthor,bookauthor);
		strcpy(sbif.bookprice,bookprice);
	}
	


	setcolor(BLACK);
	outtextxy(10, 50, sbif.bookname);
	outtextxy(80, 100, sbif.bookid);
	outtextxy(150,150, sbif.bookauthor);
	outtextxy(220, 250, sbif.bookprice);
	
}


/*函数：int searchbookbybookid()							*/
/*功能：按书籍代码查询书籍				                    */


int searchbookBybookid()
{
	HWND wnd = GetHWnd();
	StudentScore oneScore;
	char	bookid [11];		//用户输入的10位数字字符的学生学号
	int		len;
	int		isExist;

	FILE	*fpss;				//学生成绩文件指针
	if((fpss=fopen("bookInfo.dat","rb"))==NULL)	//如果成绩文件不存在，则新建之
	{
		fpss=fopen("bookInfo.dat","wb+");
		fclose(fpss);
	}else
		fclose(fpss);
	InputBox(bookidInput,11,"请输入10位书籍代码");
	len=strlen(bookidInput);
	while(len!=10)
	{
		MessageBox(wnd,"书籍代码只能为10位!\n请重新输入","书籍代码错误",MB_OK | MB_ICONERROR);
		InputBox(SNoInput,11,"请输入10位学生学号");
		len=strlen(bookidInput);
	}
	ShowHeaderOfbookInfo();
	fpss=fopen("bookInfo.dat","rb");
	isExist=false;
	while(!feof(fpss))
	{
		int length=fread(&onebook,sizeof(onebook),1,fpss);
		if(length==0)	break;
		if(strcmp(onebook.bookid,bookidInput)==0)
		{
			isExist=true;
	    	showbookInfo(onebook.bookid,onebook.bookname,onebook.bookauthor,onebook.bookprice);
		
		}
	}
	fclose(fpss);
	setcolor(BLUE);
	outtextxy(280, 200, "按任意键继续……");
	getch();
	return 1;
}







void searchbook()
{
	int key;							//用户输入的功能号
	while(TRUE)
	{
		cleardevice();
		setfont(32, 0, "宋体");
		setcolor(GREEN);
		outtextxy(180, 110, "请选择功能：");
		setcolor(BLACK);
		outtextxy(100, 160, "1.按书籍编号查询");
		outtextxy(100, 210, "2.按书名查询");
		outtextxy(100, 260, "3.按出版社查询");
		outtextxy(100, 310, "4.按作者查询");
		outtextxy(100, 360, "0.返回上一层");
		
		key=getch();				//读取该键
		if(key=='1')				//按书籍编号查询
		{
		      searchbookBybookid()；
		}else if(key=='2')			      //按书名查询
		{
			  return;
		}else if(key=='3')			//按出版社查询
		{
			   return;
		}else if(key=='4')			//按作者查询
		{
			   return;
		}else if(key=='0')			//返回到上一层功能
		{
			  return;
		}
	}
}