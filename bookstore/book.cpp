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
		  setfont(48,0,"����");
		  outtextxy(150,10,"�������ϵͳ");
		  setfont(32,0,"����");
		  setcolor(GREEN);
		  outtextxy(180,110,"��ѡ����");
		  setcolor(BLACK);
		  outtextxy(200,160,"1.��Ա��Ϣ����");
		  outtextxy(200,210,"2.ͼ����Ϣ����");
		  outtextxy(200,260,"0.�˳�ϵͳ");
		 key=getch();
		 if(key=='1')
		 {
			 guestmanage();   //��Ա��Ϣ����
		 }
		 else if(key=='2')
		 {
			 bookmanage();  //ͼ����Ϣ����
		 }
		 else if(key=='0')
		 {
			 return;
		 }
	  }
			}




			void main()
{
	initgraph(640,480);    //��ʼ��EasyXͼ�ν���
	setbkcolor(WHITE);
	cleardevice();          //����
	while(!Welcome());       
	MainInterfaceOfSystem();     //����������
	closegraph();
	}

