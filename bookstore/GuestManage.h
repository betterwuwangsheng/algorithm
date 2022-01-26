/*ͷ�ļ�GuestManage.h�������Ա��Ϣ��¼�롢ɾ�����޸ĺͲ�ѯ��*/
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
/*������void InputCourseInfor()								*/
/*���ܣ�¼��һ���γ���Ϣ									*/
/*��������													*/
/*���룺�û������Ӧ�γ���Ϣ								*/
/*�������													*/
/*��ע����													*/
/************************************************************/
int InputguestInfor()
{
	HWND wnd = GetHWnd();
    guestInfor oneguest;
	char    guestnoInput[10];				//��Ա���
	char	guestnameInput[10];			//��Ա����
	int     guestage;                     //��Ա����
	char    gusetgender                   //��Ա�Ա�
	int  len;
	int  isExist;							//�Ƿ����
	FILE *fp;
	if((fp=fopen("guestInfo.dat","rb"))==NULL)	//��Ա��Ϣ�ļ�������
	{
		fp=fopen("guestInfo.dat","wb+");			//�½�֮
		fclose(fp);
	}else
		fclose(fp);
	InputBox(guestnoInput,10,"������9λ��Ա���");
	len=strlen(guestnoInput);
	while(len!=9)
	{
		MessageBox(wnd,"��Ա���ֻ��Ϊ9λ!\n����������","��Ա���",MB_OK | MB_ICONWARNING);
		InputBox(guestnoInput,10,"������9λ��Ա���");
		len=strlen(guestnoInput);
	}
	isExist=false;
	fp=fopen("guestInfo.dat","rb");				//���´򿪻�Ա��Ϣ�ļ�
	while(!feof(fp))
	{
		int length=fread(&oneguest,sizeof(oneguest),1,fp);
		if(length==0)
			break;
		if(strcmp(oneguest.guestNo,guestnoInput)==0)	//��Ա�����Ѵ���
		{
			isExist=true;
			break;
		}
	}
	fclose(fp);
	if(isExist)						//�����Ա�����Ѵ��ڣ���ʾ����ֱ�ӷ���
	{
		char strMsg[200];
		sprintf(strMsg,"��Ա���%s (%s) �Ѵ��ڣ����������¼�롣\n¼���Աʧ��!",
			oneguest.guestno,oneguest.guestname);
		MessageBox(wnd,strMsg,"��Ա����ظ������ʧ��",MB_OK | MB_ICONWARNING);
		return 0;
	}



	InputBox(guestnameInput,10,"�������Ա�������磺\n����");
	len=strlen(guestnameInput);
	while(len<=0)
	{
		MessageBox(wnd,"��Ա��������Ϊ��!\n����������","��Ա��������",MB_OK | MB_ICONWARNING);
		InputBox(guestnameInput,10,"�������Ա�������磺\n����");
		len=strlen(guestnameInput);
	}


	InputBox(guestageInput,5,"�������Ա����");
	len=strlen(guestageInput);
	while(len<=0)
	{
		MessageBox(wnd,"��Ա���䲻��Ϊ��!\n����������","��Ա����",MB_OK | MB_ICONWARNING);
		InputBox(guestageInput,5,"�������Ա����");
		len=strlen(guestageInput);
	}



	InputBox(gusetgenderInput,4,"�������Ա�Ա�");
	len=strlen(gusetgenderInput);
	while(len<=0)
	{
		MessageBox(wnd,"��Ա�Ա���Ϊ��!\n����������","��Ա�Ա����",MB_OK | MB_ICONWARNING);
		InputBox(gusetgenderInput,4,"�������Ա�Ա�");
		len=strlen(gusetgenderInput);
	}


	strcpy(oneguest.guestno,guestnoInput);
	strcpy(oneguest.guestname,guestnameInput);
	strcpy(oneguest.guestgender,guestgenderInput);
	strcpy(oneguest.guestage,guestageInput);
	fp=fopen("guestInfo.dat","ab+");
	fwrite(&oneguest,sizeof(oneguest),1,fp);
	fclose(fp);
	MessageBox(wnd,"���ӻ�Ա�ɹ�","��Ա��ӳɹ�",MB_OK);
	return 1;
}


/************************************************************/
/*������void MainInterfaceOfguestManage()					*/
/*���ܣ���Ա������Ϣ���������棬�����û���ѡ����в�ͬ����	*/
/*��������													*/
/*���룺�û�������Ҫ���еĹ�������Ӧ�Ĵ���					*/
/*�������													*/
/*��ע����													*/
/************************************************************/
void guestmanage()
{
	int key;							//�û�����Ĺ��ܺ�
	while(TRUE)
	{
		cleardevice();
		setcolor(RED);	
		setfont(48, 0, "����");
		outtextxy(150, 10, "��Ա������Ϣ����");
		setfont(32, 0, "����");
		setcolor(GREEN);
		outtextxy(180, 110, "��ѡ���ܣ�");
		setcolor(BLACK);
		outtextxy(200, 160, "1.¼��");
		outtextxy(200, 210, "2.ɾ��");
		outtextxy(200, 260, "3.��ѯ");
		outtextxy(200, 310, "4.�޸�");
		outtextxy(200, 360, "0..������һ��");
		
		key=getch();				//��ȡ�ü�
		if(key=='1')				//¼���Ա������Ϣ
		{
			InputguestInfo();
		}
		else if(key=='2')			//ɾ��������Ϣ
		{
			return ;
		}else if(key=='3')			//��ѯѧ��������Ϣ
		{
			return ;
		}else if(key=='4')			//�޸Ļ�Ա������Ϣ
		{
			return ;
		}else if(key=='0')			//�����'0'����ʾ�˳���Ա������Ϣ������
		{
		    return ;
		}




 

