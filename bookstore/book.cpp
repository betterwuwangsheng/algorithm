#include <stdio.h>
#include "graphics.h"
#include "CommonData.h"
#include"Login.h"
#include"BookManage.h"
#include"GuestManage.h"
#include <string.h>
#include <conio.h>
#include "Windows.h"
#include'SearchBook.h'


		void MainInterfaceOfSystem()           
 {
	   int key;
	  whlie(TRUE)
	  {
		  cleardevice();
		  setcolor(RED);
		  setfont(48,0,"黑体");
		  outtextxy(150,10,"书店销售系统");
		  setfont(32,0,"宋体");
		  setcolor(GREEN);
		  outtextxy(180,110,"请选择功能");
		  setcolor(BLACK);
		  outtextxy(200,160,"1.会员信息管理");
		  outtextxy(200,210,"2.图书信息管理");
		  outtextxy(200,260,"0.退出系统");
		 key=getch();
		 if(key=='1')
		 {
			 guestmanage();   //会员信息管理
		 }
		 else if(key=='2')
		 {
			 bookmanage();  //图书信息管理
		 }
		 else if(key=='0')
		 {
			 return;
		 }
	  }
			}




			void main()
{
	initgraph(640,480);    //初始化EasyX图形界面
	setbkcolor(WHITE);
	cleardevice();          //清屏
	while(!Welcome());       
	MainInterfaceOfSystem();     //程序主界面
	closegraph();
	}

