/*头文件Login.h，处理欢迎界面、用户的登录及注册功能，用户登录信息保存在文件UserInfo.dat文件中*/
#include <stdio.h>
#include "CommonData.h"
#include <conio.h>
#include "graphics.h"
#include "windows.h"

/************************************************************/
/*函数：int UserRegister()									*/
/*功能：用户注册界面，返回0									*/
/*参数：无													*/
/*输入：用户输入用户名及密码								*/
/*输出：注册成功信息										*/
/*备注：本函数没有处理用户名重复的问题，请注册时自行注意	*/
/************************************************************/
int UserRegister()
{
	UserInfo oneUser;
	char usernameInput[21];			//用户输入的用户名
	char passwordInput[21];			//用户输入的密码
	int  isExist=false;				//表示用户输入的用户名是否存在
	FILE *fp;
	if((fp=fopen("UserInfo.dat","rb"))==NULL)	//用户信息文件不存在
	{
		fp=fopen("UserInfo.dat","wb+");			//新建之
		fclose(fp);
	}else
		fclose(fp);
	fp=fopen("UserInfo.dat","rb");
	InputBox(usernameInput,21,"欢迎注册!\n请输入用户名(20个字符以内)：");
	while(true)
	{
		isExist=false;
		rewind(fp);
		while(!feof(fp))
		{
			int length=fread(&oneUser,sizeof(oneUser),1,fp);
			if(length==0)
				break;
			if(strcmp(oneUser.UName,usernameInput)==0)	//用户存在
			{
				isExist=true;
				break;
			}
		}
		if(isExist)								//如果用户已经存在，提示重新输入用户名
		{
			char strMsg[100];
			sprintf(strMsg,"用户名%s已经存在!\n请重新输入一个用户名：",usernameInput);
			memcpy(usernameInput,0,21);			//清空原来输入的用户名
			InputBox(usernameInput,21,strMsg);
		}else
			break;
	}
	fclose(fp);
	InputBox(passwordInput,21,"请输入密码(20个字符以内)：");
	strcpy(oneUser.UName,usernameInput);
	strcpy(oneUser.UPassword,passwordInput);
	fp=fopen("UserInfo.dat","ab+");	
	fwrite(&oneUser,sizeof(oneUser),1,fp);		//将用户信息保存到文件中去
	fclose(fp);
	HWND wnd = GetHWnd();						//获取当前窗口句柄
	::MessageBox(wnd,"注册成功，请登录系统","注册成功",MB_OK);	//弹出注册成功提示框
	return 0;
}
/************************************************************/
/*函数：int UserLogin()										*/
/*功能：用户登录界面及验证，如果登录成功，返回1，失败返回0	*/
/*参数：无													*/
/*输入：用户输入用户名及密码								*/
/*输出：登录是否成功信息									*/
/************************************************************/
int UserLogin()
{
	FILE *fp;
	int n;
	UserInfo oneUser;
	char usernameInput[21];			//用户输入的用户名
	char passwordInput[21];			//用户输入的密码
	InputBox(usernameInput,21,"请输入用户名(20个字符以内)：");
	InputBox(passwordInput,21,"请输入密码：");
	if((fp=fopen("UserInfo.dat","rb"))==NULL)	//用户信息文件不存在，登录失败，提示用户先注册
	{
		HWND wnd = GetHWnd();
		::MessageBox(wnd,"对不起，用户名不存在，请注册!","登录失败",MB_OK);
		return UserRegister();
	}
	while(!feof(fp))
	{
		int length=fread(&oneUser,sizeof(oneUser),1,fp);
		if(length==0)
			break;
		if(strcmp(oneUser.UName,usernameInput)==0)	//用户存在
		{
			n=0;
			do{
				n++;
				if(strcmp(oneUser.UPassword,passwordInput)==0)	//密码匹配
				{
					fclose(fp);
					HWND wnd = GetHWnd();
					::MessageBox(wnd,"登录成功!","登录成功",MB_OK);
					return 1;							//登录成功
				}else
				{
					InputBox(passwordInput,21,"密码错误，请重新输入:");
				}
			}while(n<3);
			break;
		}
	}
	fclose(fp);
	HWND wnd = GetHWnd();
	::MessageBox(wnd,"登录失败，请检查用户名和密码后重新登录!","登录失败",MB_OK);
	return 0;											//登录失败
}
/************************************************************/
/*函数：int Welcome()										*/
/*功能：欢迎界面，由用户选择登录或注册功能					*/
/*参数：无													*/
/*输入：用户输入用户名及密码								*/
/*输出：欢迎界面											*/
/*返回值：如果登录成功返回1，其它返回0						*/
/************************************************************/
int Welcome()
{
	int key;							//用户输入的功能号
	int nowColor=255;					//变化的颜色值
	while(TRUE)
	{
		setcolor(RGB(255,nowColor,0));	//RGB组合三种颜色
		setfont(48, 0, "黑体");
		outtextxy(10, 10, "欢迎使用学生成绩管理系统");
		setfont(32, 0, "宋体");
		setcolor(RGB(0,255,nowColor));
		outtextxy(200, 80, "开发：邓达平");
		outtextxy(150, 130, "江西理工大学应用科学学院");
		nowColor-= 8;					//该值每次-8
		if (nowColor < 0) nowColor = 255;
		Sleep(20);						//每20毫秒更新一次
		setcolor(BLACK);
		outtextxy(200, 200, "请选择功能：");
		outtextxy(200, 250, "1.登录");
		outtextxy(200, 300, "2.注册");
		outtextxy(200, 350, "0.退出系统");
		if(kbhit())						//如果某键被按下
		{
			key=getch();				//读取该键
			if(key=='1')				//如果划'1'，表示用户登录
			{
				int res=UserLogin();
				return res;
			}
			else if(key=='2')			//如果是'2'，表示用户注册
			{
				int res=UserRegister();
				return res;
			}else if(key=='0')			//如果是'0'，表示退出程序
			{
				closegraph();
				exit(0);
			}
		}
	}
}
