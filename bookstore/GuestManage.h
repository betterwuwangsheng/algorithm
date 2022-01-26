/*头文件GuestManage.h，处理会员信息的录入、删除、修改和查询，*/
#include <stdio.h>
#include "graphics.h"
#include "CommonData.h"
#include"Login.h"
#include"BookManage.h"
#include"GuestManage.h"
#include"SearchBook.h"
#include <string.h>
#include <conio.h>
#include "Windows.h"


/************************************************************/
/*函数：void InputCourseInfor()								*/
/*功能：录入一个课程信息									*/
/*参数：无													*/
/*输入：用户输入对应课程信息								*/
/*输出：无													*/
/*备注：无													*/
/************************************************************/
int InputguestInfor()
{
	HWND wnd = GetHWnd();
    guestInfor oneguest;
	char    guestnoInput[10];				//会员编号
	char	guestnameInput[10];			//会员姓名
	int     guestage;                     //会员年龄
	char    gusetgender                   //会员性别
	int  len;
	int  isExist;							//是否存在
	FILE *fp;
	if((fp=fopen("guestInfo.dat","rb"))==NULL)	//会员信息文件不存在
	{
		fp=fopen("guestInfo.dat","wb+");			//新建之
		fclose(fp);
	}else
		fclose(fp);
	InputBox(guestnoInput,10,"请输入9位会员编号");
	len=strlen(guestnoInput);
	while(len!=9)
	{
		MessageBox(wnd,"会员编号只能为9位!\n请重新输入","会员编号",MB_OK | MB_ICONWARNING);
		InputBox(guestnoInput,10,"请输入9位会员编号");
		len=strlen(guestnoInput);
	}
	isExist=false;
	fp=fopen("guestInfo.dat","rb");				//重新打开会员信息文件
	while(!feof(fp))
	{
		int length=fread(&oneguest,sizeof(oneguest),1,fp);
		if(length==0)
			break;
		if(strcmp(oneguest.guestNo,guestnoInput)==0)	//会员代码已存在
		{
			isExist=true;
			break;
		}
	}
	fclose(fp);
	if(isExist)						//如果会员代码已存在，提示错误，直接返回
	{
		char strMsg[200];
		sprintf(strMsg,"会员编号%s (%s) 已存在，请查正后再录入。\n录入会员失败!",
			oneguest.guestno,oneguest.guestname);
		MessageBox(wnd,strMsg,"会员编号重复，添加失败",MB_OK | MB_ICONWARNING);
		return 0;
	}



	InputBox(guestnameInput,10,"请输入会员姓名，如：\n张三");
	len=strlen(guestnameInput);
	while(len<=0)
	{
		MessageBox(wnd,"会员姓名不能为空!\n请重新输入","会员姓名错误",MB_OK | MB_ICONWARNING);
		InputBox(guestnameInput,10,"请输入会员姓名，如：\n张三");
		len=strlen(guestnameInput);
	}


	InputBox(guestageInput,5,"请输入会员年龄");
	len=strlen(guestageInput);
	while(len<=0)
	{
		MessageBox(wnd,"会员年龄不能为空!\n请重新输入","会员年龄",MB_OK | MB_ICONWARNING);
		InputBox(guestageInput,5,"请输入会员年龄");
		len=strlen(guestageInput);
	}



	InputBox(gusetgenderInput,4,"请输入会员性别");
	len=strlen(gusetgenderInput);
	while(len<=0)
	{
		MessageBox(wnd,"会员性别不能为空!\n请重新输入","会员性别错误",MB_OK | MB_ICONWARNING);
		InputBox(gusetgenderInput,4,"请输入会员性别");
		len=strlen(gusetgenderInput);
	}


	strcpy(oneguest.guestno,guestnoInput);
	strcpy(oneguest.guestname,guestnameInput);
	strcpy(oneguest.guestgender,guestgenderInput);
	strcpy(oneguest.guestage,guestageInput);
	fp=fopen("guestInfo.dat","ab+");
	fwrite(&oneguest,sizeof(oneguest),1,fp);
	fclose(fp);
	MessageBox(wnd,"增加会员成功","会员添加成功",MB_OK);
	return 1;
}


/************************************************************/
/*函数：void MainInterfaceOfguestManage()					*/
/*功能：会员基本信息管理主界面，根据用户的选择进行不同操作	*/
/*参数：无													*/
/*输入：用户输入所要进行的功能所对应的代码					*/
/*输出：无													*/
/*备注：无													*/
/************************************************************/
void guestmanage()
{
	int key;							//用户输入的功能号
	while(TRUE)
	{
		cleardevice();
		setcolor(RED);	
		setfont(48, 0, "黑体");
		outtextxy(150, 10, "会员基本信息管理");
		setfont(32, 0, "宋体");
		setcolor(GREEN);
		outtextxy(180, 110, "请选择功能：");
		setcolor(BLACK);
		outtextxy(200, 160, "1.录入");
		outtextxy(200, 210, "2.删除");
		outtextxy(200, 260, "3.查询");
		outtextxy(200, 310, "4.修改");
		outtextxy(200, 360, "0..返回上一层");
		
		key=getch();				//读取该键
		if(key=='1')				//录入会员基本信息
		{
			InputguestInfo();
		}
		else if(key=='2')			//删除基本信息
		{
			return ;
		}else if(key=='3')			//查询学生基本信息
		{
			return ;
		}else if(key=='4')			//修改会员基本信息
		{
			return ;
		}else if(key=='0')			//如果是'0'，表示退出会员基本信息管理功能
		{
		    return ;
		}




 

