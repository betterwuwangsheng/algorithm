/*ͷ�ļ�Login.h������ӭ���桢�û��ĵ�¼��ע�Ṧ�ܣ��û���¼��Ϣ�������ļ�UserInfo.dat�ļ���*/
#include <stdio.h>
#include "CommonData.h"
#include <conio.h>
#include "graphics.h"
#include "windows.h"

/************************************************************/
/*������int UserRegister()									*/
/*���ܣ��û�ע����棬����0									*/
/*��������													*/
/*���룺�û������û���������								*/
/*�����ע��ɹ���Ϣ										*/
/*��ע��������û�д����û����ظ������⣬��ע��ʱ����ע��	*/
/************************************************************/
int UserRegister()
{
	UserInfo oneUser;
	char usernameInput[21];			//�û�������û���
	char passwordInput[21];			//�û����������
	int  isExist=false;				//��ʾ�û�������û����Ƿ����
	FILE *fp;
	if((fp=fopen("UserInfo.dat","rb"))==NULL)	//�û���Ϣ�ļ�������
	{
		fp=fopen("UserInfo.dat","wb+");			//�½�֮
		fclose(fp);
	}else
		fclose(fp);
	fp=fopen("UserInfo.dat","rb");
	InputBox(usernameInput,21,"��ӭע��!\n�������û���(20���ַ�����)��");
	while(true)
	{
		isExist=false;
		rewind(fp);
		while(!feof(fp))
		{
			int length=fread(&oneUser,sizeof(oneUser),1,fp);
			if(length==0)
				break;
			if(strcmp(oneUser.UName,usernameInput)==0)	//�û�����
			{
				isExist=true;
				break;
			}
		}
		if(isExist)								//����û��Ѿ����ڣ���ʾ���������û���
		{
			char strMsg[100];
			sprintf(strMsg,"�û���%s�Ѿ�����!\n����������һ���û�����",usernameInput);
			memcpy(usernameInput,0,21);			//���ԭ��������û���
			InputBox(usernameInput,21,strMsg);
		}else
			break;
	}
	fclose(fp);
	InputBox(passwordInput,21,"����������(20���ַ�����)��");
	strcpy(oneUser.UName,usernameInput);
	strcpy(oneUser.UPassword,passwordInput);
	fp=fopen("UserInfo.dat","ab+");	
	fwrite(&oneUser,sizeof(oneUser),1,fp);		//���û���Ϣ���浽�ļ���ȥ
	fclose(fp);
	HWND wnd = GetHWnd();						//��ȡ��ǰ���ھ��
	::MessageBox(wnd,"ע��ɹ������¼ϵͳ","ע��ɹ�",MB_OK);	//����ע��ɹ���ʾ��
	return 0;
}
/************************************************************/
/*������int UserLogin()										*/
/*���ܣ��û���¼���漰��֤�������¼�ɹ�������1��ʧ�ܷ���0	*/
/*��������													*/
/*���룺�û������û���������								*/
/*�������¼�Ƿ�ɹ���Ϣ									*/
/************************************************************/
int UserLogin()
{
	FILE *fp;
	int n;
	UserInfo oneUser;
	char usernameInput[21];			//�û�������û���
	char passwordInput[21];			//�û����������
	InputBox(usernameInput,21,"�������û���(20���ַ�����)��");
	InputBox(passwordInput,21,"���������룺");
	if((fp=fopen("UserInfo.dat","rb"))==NULL)	//�û���Ϣ�ļ������ڣ���¼ʧ�ܣ���ʾ�û���ע��
	{
		HWND wnd = GetHWnd();
		::MessageBox(wnd,"�Բ����û��������ڣ���ע��!","��¼ʧ��",MB_OK);
		return UserRegister();
	}
	while(!feof(fp))
	{
		int length=fread(&oneUser,sizeof(oneUser),1,fp);
		if(length==0)
			break;
		if(strcmp(oneUser.UName,usernameInput)==0)	//�û�����
		{
			n=0;
			do{
				n++;
				if(strcmp(oneUser.UPassword,passwordInput)==0)	//����ƥ��
				{
					fclose(fp);
					HWND wnd = GetHWnd();
					::MessageBox(wnd,"��¼�ɹ�!","��¼�ɹ�",MB_OK);
					return 1;							//��¼�ɹ�
				}else
				{
					InputBox(passwordInput,21,"�����������������:");
				}
			}while(n<3);
			break;
		}
	}
	fclose(fp);
	HWND wnd = GetHWnd();
	::MessageBox(wnd,"��¼ʧ�ܣ������û�������������µ�¼!","��¼ʧ��",MB_OK);
	return 0;											//��¼ʧ��
}
/************************************************************/
/*������int Welcome()										*/
/*���ܣ���ӭ���棬���û�ѡ���¼��ע�Ṧ��					*/
/*��������													*/
/*���룺�û������û���������								*/
/*�������ӭ����											*/
/*����ֵ�������¼�ɹ�����1����������0						*/
/************************************************************/
int Welcome()
{
	int key;							//�û�����Ĺ��ܺ�
	int nowColor=255;					//�仯����ɫֵ
	while(TRUE)
	{
		setcolor(RGB(255,nowColor,0));	//RGB���������ɫ
		setfont(48, 0, "����");
		outtextxy(10, 10, "��ӭʹ��ѧ���ɼ�����ϵͳ");
		setfont(32, 0, "����");
		setcolor(RGB(0,255,nowColor));
		outtextxy(200, 80, "�������˴�ƽ");
		outtextxy(150, 130, "��������ѧӦ�ÿ�ѧѧԺ");
		nowColor-= 8;					//��ֵÿ��-8
		if (nowColor < 0) nowColor = 255;
		Sleep(20);						//ÿ20�������һ��
		setcolor(BLACK);
		outtextxy(200, 200, "��ѡ���ܣ�");
		outtextxy(200, 250, "1.��¼");
		outtextxy(200, 300, "2.ע��");
		outtextxy(200, 350, "0.�˳�ϵͳ");
		if(kbhit())						//���ĳ��������
		{
			key=getch();				//��ȡ�ü�
			if(key=='1')				//�����'1'����ʾ�û���¼
			{
				int res=UserLogin();
				return res;
			}
			else if(key=='2')			//�����'2'����ʾ�û�ע��
			{
				int res=UserRegister();
				return res;
			}else if(key=='0')			//�����'0'����ʾ�˳�����
			{
				closegraph();
				exit(0);
			}
		}
	}
}
