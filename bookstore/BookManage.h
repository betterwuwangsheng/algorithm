/*ͷ�ļ�BookManage.h������ͼ����Ϣ��¼�롢ɾ�����޸ĺͲ�ѯ��*/
/*���е�ͼ����Ϣ���ݾ��洢��bookInfo.dat�ļ���*/
#include <stdio.h>
#include "graphics.h"
#include "CommonData.h"
#include <string.h>
#include <conio.h>



/*������void InputbookInfo()							*/
/*���ܣ�¼��һ��ͼ����Ϣ									*/

int InputbookInfo()
{
	HWND wnd = GetHWnd();
	bookInfo onebook;			//�鼮��Ϣ�ṹ�����
	char bookidInput[10];		//�����鼮����
	char booknameInput[10];		//��������
	char bookauthorInput[10];	//�������߲�����10���ַ�
	char bookpressInput[20];    //���������
	char bookpriceInput[5];    
	int  len;
	int  isExist;				//�Ƿ����
	FILE *fp;
	if((fp=fopen("bookInfo.dat","rb"))==NULL)	//�鼮��Ϣ�ļ�������
	{
		fp=fopen("bookInfo.dat","wb+");			//�½�֮
		fclose(fp);
	}else
		fclose(fp);



	InputBox(bookidInput,11,"������10λ�鼮����");
	len=strlen(bookidInput);
	while(len!=10)
	{
		MessageBox(wnd,"�鼮����ֻ��Ϊ10λ!\n����������","�鼮�������",MB_OK | MB_ICONWARNING);
		InputBox(bookidInput,7,"������10λרҵ����");
		len=strlen(bookidInput);
	}
	isExist=false;
	fp=fopen("bookInfo.dat","rb");				//���´��鼮��Ϣ�ļ�
	while(!feof(fp))
	{
		int length=fread(&onebook,sizeof(onebook),1,fp);
		if(length==0)
			break;
		if(strcmp(onebook.bookid,bookidInput)==0)	//�鼮�����Ѵ���
		{
			isExist=true;
			break;
		}
	}
	fclose(fp);
	if(isExist)						//����鼮�����Ѵ��ڣ���ʾ����ֱ�ӷ���
	{
		char strMsg[100];
		sprintf(strMsg,"�鼮����%s(%s)�Ѵ��ڣ����������¼�롣\n¼���鼮ʧ��!",
			onebook.bookid,onebook.bookname);
		MessageBox(wnd,strMsg,"�鼮�����ظ������ʧ��",MB_OK | MB_ICONWARNING);
		return 0;
	}





	InputBox(booknameInput,10,"�������������������磺\n�������뺣��");
	len=strlen(booknameInput);
	while(len<=0)
	{
		MessageBox(wnd,"�鼮���Ʋ���Ϊ��!\n����������","�鼮���ƴ���",MB_OK | MB_ICONWARNING);
		InputBox(booknameInput,10,"�������������鼮���ƣ��磺\n�������뺣��");
		len=strlen(booknameInput);
	}




	InputBox(bookauthorInput,10,"�������������ƣ��磺\n��ӹ");
	len=strlen(bookauthorInput);
	while(len<=0)
	{
		MessageBox(wnd,"�������Ʋ���Ϊ��!\n����������","�������ƴ���",MB_OK | MB_ICONWARNING);
		InputBox(bookauthorInput,10,"�������������ƣ��磺\n��ӹ");
		len=strlen(bookauthorInput);
	}



	InputBox(bookpressInput,20,"����������磬�磺\n���������");
	len=strlen(bookpressInput);
	while(len<=0)
	{
		MessageBox(wnd,"�����粻��Ϊ��!\n����������","���������",MB_OK | MB_ICONWARNING);
		InputBox(bookpressInput,20,"����������磬�磺\n���������");
		len=strlen(bookpressInput);
	}


	InputBox(bookpriceInput,5,"������۸��磺\n20");
	len=strlen(bookpriceInput);
	while(len<=0)
	{
		MessageBox(wnd,"�۸���Ϊ��!\n����������","�۸����",MB_OK | MB_ICONWARNING);
		InputBox(bookpriceInput,10,"������۸��磺\n20");
		len=strlen(bookpriceInput);
	}

	
	
	
	while(len<=0);
	strcpy(onebook.bookid,bookidInput);
	strcpy(onebook.bookname,booknameInput);
	strcpy(onebook.bookauthor,bookauthorInput);
	strcpy(onebook.bookpress,bookpressInput);
    strcpy(onebook.bookprice,bookpriceInput);
	fp=fopen("bookInfo.dat","ab+");
	fwrite(&onebook,sizeof(onebook),1,fp);
	fclose(fp);
	MessageBox(wnd,"�����鼮�ɹ�","�鼮��ӳɹ�",MB_OK);
	return 1;
}







/*������int Deletebook()*/
/*���ܣ�ɾ���鼮*/
				 		                   											         
int Deletebook()
{
	HWND wnd = GetHWnd();
	bookInfo onebook;
	char bookidInput[11];		//�����鼮����
	char booknameInput[10];		//��������
	int		len;
	int		isExist;
	FILE	*fpss,*fptemp;		//ѧ���ɼ��ļ�����ʱ�ɼ��ļ�ָ��
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
		MessageBox(wnd,"�鼮����ֻ��Ϊ10λ!\n����������","�鼮����",MB_OK | MB_ICONERROR);
		InputBox(bookidInput,11,"������10λ�鼮����");
		len=strlen(bookidInput);
	}



	InputBox(booknameInput,10,"����������");
	len=strlen(booknameInput);
	fpss=fopen("bookInfo.dat","rb");
	isExist=false;
	while(!feof(fpss))
	{
		int length=fread(&onebook,sizeof(onebook),1,fpss);
		if(length==0)	break;
		if(strcmp(onebook.bookid,bookidInput)==0 &&	                	//�����ͼ���Ѵ���
			strcmp(onebook.bookname,booknameInput)==0)
		{
			isExist=true;
			break;
		}
	}



	fclose(fpss);
	if(!isExist)
	{
		char strMsg[200];
		sprintf(strMsg,"�鼮%s%s�����ڡ��޷�ɾ��\nɾ���鼮ʧ��!",
			onebook.bookid,onebook.bookname);
		MessageBox(wnd,strMsg,"�鼮�����ڣ�ɾ��ʧ��",MB_OK);
		return 0;
	}




	char stronebookInfor[200]="";
	sprintf(stronebookInfor,"��Ҫɾ�����鼮���£�\n\r������%s\n\r�鼮���룺%sȷ��ɾ����",
		onebook.bookInfo,onebook.bookInfo);
	if(MessageBox(wnd,stronebookInfor,"��ȷ��ɾ��",MB_YESNO)==IDYES)	//ȷ��ɾ��
	{
		if(MessageBox(wnd,"���ɾ����\nɾ�����޷��ָ�","ȷ��ɾ��",
			MB_YESNO | MB_ICONQUESTION)==IDYES)
		{
			bookInfo tempbook;
			fpss=fopen("bookInfo.dat","rb");
			fptemp=fopen("tempbookInfo.dat","wb+");
			while(!feof(fpss))
			{	                                        
				int length=fread(&tempbook,sizeof(onebook),1,fpss);
				if(length==0)	break;
				if(strcmp(tempbook.bookid,bookidInput)!=0 ||	strcmp(tempbook.bookname,booknameInput)!=0)
					fwrite(&tempbook,sizeof(tempbook),1,fptemp);
			}
			fclose(fpss);
			fclose(fptemp);
			Sleep(20);
			remove("bookInfo.dat");							//ɾ�����ļ�
			rename("tempbookInfo.dat","bookInfo.dat");		//����ʱ�ļ������鼮��Ϣ�ļ�
			MessageBox(wnd,"ɾ���ɹ���\n��ɾ��ͼ��","ɾ���ɹ�",MB_OK | MB_ICONWARNING);
			return 1;
		}
	}
	return 0;
}












/************************************************************/
/*������int Modifybook()			                    */
/*���ܣ��޸��鼮�۸�						             	    */
/*��������													*/
/*���룺�û������鼮���롢�¼۸�					         */
/*�������													*/
/*��ע����													*/
/************************************************************/
int Modifybook()
{
	HWND wnd = GetHWnd();
	bookInfo onebook;          //�鼮��Ϣ�ṹ�����
	char	bookidInput[11];		//�û������10λ�����ַ����鼮����
    char  bookpriceInput;		//�û�����ļ۸�
	char  booknameInput;
	int		len;
	int		isExist;
	FILE	*fpss;				//ѧ���ɼ��ļ�ָ��
	InputBox(bookidInput,11,"������10λ�鼮����");
	len=strlen(bookidInput);
	while(len!=10)
	{
		MessageBox(wnd,"�鼮����ֻ��Ϊ10λ!\n����������","�鼮�������",MB_OK | MB_ICONERROR);
		InputBox(bookidInput,11,"������10λ�鼮����");
		len=strlen(bookidInput);
	}



	InputBox(booknameInput,10,"����������");
	len=strlen(booknameInput);
	while(len<=0)                       
	{
		MessageBox(wnd,"��������Ϊ��!\n����������","��������",MB_OK | MB_ICONWARNING);
		InputBox(booknameInput,10,"����������");
		len=strlen(booknameInput);
	}


	
	if((fpss=fopen("bookInfo.dat","rb"))==NULL)	      //���ͼ���ļ������ڣ����½�֮
	{
		fpss=fopen("bookInfo.dat","wb+");
		fclose(fpss);
	}else
		fclose(fpss);
	fpss=fopen("bookInfo.dat","rb+");              //��д��ʽ�򿪳ɼ��ļ�
	isExist=false;
	while(!feof(fpss))
	{
		int length=fread(&onebook,sizeof(onebook),1,fpss);
		if(length==0)	break;
		if(strcmp(onebook.bookid,bookidInput)==0 &&	         //�����ͼ����ڣ�ȷ���޸�
			strcmp(onebook.bookname,booknameInput)==0)
		
		{
			isExist=true;
			InputBox(bookpriceInput,10,"�������¼۸��磺20");
			len=strlen(bookpriceInput);
			while(len<=0)
			{
				MessageBox(wnd,"�¼۸���Ϊ��!\n����������","�۸����",MB_OK | MB_ICONWARNING);
				InputBox(bookprice,10,"�������¼۸��磺20");
				len=strlen(bookpriceInput);
			}
			char stronebookInfor[200]="";
			sprintf(stronebookInfor,"������%s\n\r�鼮���룺%s\n\rԭ�۸�%.1f\n\r�޸ĺ�۸�%s\n\rȷ���޸���",
				onebook.bookname,onebook.bookid,onebook.bookprice,bookpriceInput);
			if(MessageBox(wnd,stronebookInfor,"ȷ���޸�",MB_YESNO)==IDYES)	//ȷ�ϱ���
			{
				bookprice; tempbookprice;
				tempprice.isValid=1;
				strcpy(tempbookInfo.bookid,bookidInput);
				strcpy(tempbookInfo.bookname,booknameInput);
				strcpy(tembookInfo,bookprice,bookpriceInput);
				fseek(fpss,-sizeof(bookprice),SEEK_CUR);		//����һ���鼮�۸�
				fwrite(&tempbookprice,sizeof(bookprice),1,fpss);	//��ԭ�鼮�۸񸲸ǣ��Ӷ�����޸�
				MessageBox(wnd,"�޸ĳɹ���\n���޸�һ��ͼ��۸�","�޸ĳɹ�",
					MB_OK | MB_ICONWARNING);
			}else
				MessageBox(wnd,"�޸�δ���","�޸�ʧ��",MB_OK | MB_ICONWARNING);
			break;
		}
	}
	fclose(fpss);
	if(!isExist)
	{
		char strMsg[200];
		sprintf(strMsg,"������%s\n�鼮���룺%s\n�鼮�����ڡ��޷��޸�\n�޸�ʧ��!",
			booknameInput,bookidInput);
		MessageBox(wnd,strMsg,"�鼮�����ڣ��޷��޸�",MB_OK);
		return 0;
	}
	return 1;
}



















































/*������void bookmanage()*/
/*���ܣ�ͼ�������Ϣ���������棬�����û���ѡ����в�ͬ����	*/

{
	int key;							//�û�����Ĺ��ܺ�
	while(TRUE)
	{
		cleardevice();
		setcolor(RED);	
		setfont(48, 0, "����");
		outtextxy(150, 10, "�鼮������Ϣ����");
		setfont(32, 0, "����");
		setcolor(GREEN);
		outtextxy(180, 110, "��ѡ���ܣ�");
		setcolor(BLACK);
		outtextxy(200, 160, "1.�鼮¼��");
		outtextxy(200, 210, "2.�鼮ɾ��");
		outtextxy(200, 260, "3.�鼮��ѯ");
		outtextxy(200, 310, "4.�鼮�۸��޸�");
		outtextxy(200, 360, "0.������һ��");
		key=getch();				//��ȡ�ü�
		if(key=='1')				//¼���鼮������Ϣ
		{
			 InputbookInfo();
		}
		else if(key=='2')			//ɾ���鼮������Ϣ
		{
			  Deletebook();
		}else if(key=='3')			//��ѯ�鼮������Ϣ
		{
			 searchbook();
		}else if(key=='4')			//�޸��鼮������Ϣ
		{
			Modifybook();
		}else if(key=='0')			//�����'0'����ʾ�˳��������Ϣ������
		{
			return;

		}
	}
}



