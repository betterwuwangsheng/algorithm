
#include <stdio.h>
#include "graphics.h"
#include "CommonData.h"
#include"BookManage.h"
#include"GuestMange.h"
#include"SearchBook.h"
#include <string.h>
#include <conio.h>
#include "Windows.h"



/*������void ShowHeaderOfStuOneScore()						*/
/*���ܣ���ʾ�鼮��ͷ �������鼮���롢�����硢���ߡ��۸�		*/

void ShowHeaderOfbookInfo()
{
	cleardevice();
	setcolor(RED);	
	setfont(24, 0, "����");
	outtextxy(240, 10, "ͼ����Ϣ��ѯ���");
	setfont(12, 0, "����");
	setcolor(GREEN);
	outtextxy(10, 60, "����");
	outtextxy(80, 60, "�鼮����");
	outtextxy(150, 60, "������");
	outtextxy(220, 60, "����");
	outtextxy(270, 60, "�۸�");

}


/*������void ShowOnebookInfo(��                    		*/					
/*����	 ��ʾһ���鼮��������Ϣ                            */

void showbookInfo(char bookid[],char bookname[],char bookauthor[],double bookprice)
{
	 
	bookInfor sbif,onebook;
	int isExist;
	FILE* fp;
	isExist=false;              //�����鼮������Ϣ���ݴ浽sbif��

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


/*������int searchbookbybookid()							*/
/*���ܣ����鼮�����ѯ�鼮				                    */


int searchbookBybookid()
{
	HWND wnd = GetHWnd();
	StudentScore oneScore;
	char	bookid [11];		//�û������10λ�����ַ���ѧ��ѧ��
	int		len;
	int		isExist;

	FILE	*fpss;				//ѧ���ɼ��ļ�ָ��
	if((fpss=fopen("bookInfo.dat","rb"))==NULL)	//����ɼ��ļ������ڣ����½�֮
	{
		fpss=fopen("bookInfo.dat","wb+");
		fclose(fpss);
	}else
		fclose(fpss);
	InputBox(bookidInput,11,"������10λ�鼮����");
	len=strlen(bookidInput);
	while(len!=10)
	{
		MessageBox(wnd,"�鼮����ֻ��Ϊ10λ!\n����������","�鼮�������",MB_OK | MB_ICONERROR);
		InputBox(SNoInput,11,"������10λѧ��ѧ��");
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
	outtextxy(280, 200, "���������������");
	getch();
	return 1;
}







void searchbook()
{
	int key;							//�û�����Ĺ��ܺ�
	while(TRUE)
	{
		cleardevice();
		setfont(32, 0, "����");
		setcolor(GREEN);
		outtextxy(180, 110, "��ѡ���ܣ�");
		setcolor(BLACK);
		outtextxy(100, 160, "1.���鼮��Ų�ѯ");
		outtextxy(100, 210, "2.��������ѯ");
		outtextxy(100, 260, "3.���������ѯ");
		outtextxy(100, 310, "4.�����߲�ѯ");
		outtextxy(100, 360, "0.������һ��");
		
		key=getch();				//��ȡ�ü�
		if(key=='1')				//���鼮��Ų�ѯ
		{
		      searchbookBybookid()��
		}else if(key=='2')			      //��������ѯ
		{
			  return;
		}else if(key=='3')			//���������ѯ
		{
			   return;
		}else if(key=='4')			//�����߲�ѯ
		{
			   return;
		}else if(key=='0')			//���ص���һ�㹦��
		{
			  return;
		}
	}
}