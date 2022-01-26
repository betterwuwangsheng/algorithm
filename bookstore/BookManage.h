/*头文件BookManage.h，处理图书信息的录入、删除、修改和查询，*/
/*所有的图书信息数据均存储在bookInfo.dat文件中*/
#include <stdio.h>
#include "graphics.h"
#include "CommonData.h"
#include <string.h>
#include <conio.h>



/*函数：void InputbookInfo()							*/
/*功能：录入一个图书信息									*/

int InputbookInfo()
{
	HWND wnd = GetHWnd();
	bookInfo onebook;			//书籍信息结构体变量
	char bookidInput[10];		//输入书籍代码
	char booknameInput[10];		//输入书名
	char bookauthorInput[10];	//输入作者不超过10个字符
	char bookpressInput[20];    //输入出版社
	char bookpriceInput[5];    
	int  len;
	int  isExist;				//是否存在
	FILE *fp;
	if((fp=fopen("bookInfo.dat","rb"))==NULL)	//书籍信息文件不存在
	{
		fp=fopen("bookInfo.dat","wb+");			//新建之
		fclose(fp);
	}else
		fclose(fp);



	InputBox(bookidInput,11,"请输入10位书籍代码");
	len=strlen(bookidInput);
	while(len!=10)
	{
		MessageBox(wnd,"书籍代码只能为10位!\n请重新输入","书籍代码错误",MB_OK | MB_ICONWARNING);
		InputBox(bookidInput,7,"请输入10位专业代码");
		len=strlen(bookidInput);
	}
	isExist=false;
	fp=fopen("bookInfo.dat","rb");				//重新打开书籍信息文件
	while(!feof(fp))
	{
		int length=fread(&onebook,sizeof(onebook),1,fp);
		if(length==0)
			break;
		if(strcmp(onebook.bookid,bookidInput)==0)	//书籍代码已存在
		{
			isExist=true;
			break;
		}
	}
	fclose(fp);
	if(isExist)						//如果书籍代码已存在，提示错误，直接返回
	{
		char strMsg[100];
		sprintf(strMsg,"书籍代码%s(%s)已存在，请查正后再录入。\n录入书籍失败!",
			onebook.bookid,onebook.bookname);
		MessageBox(wnd,strMsg,"书籍代码重复，添加失败",MB_OK | MB_ICONWARNING);
		return 0;
	}





	InputBox(booknameInput,10,"请输入完整的书名，如：\n《老人与海》");
	len=strlen(booknameInput);
	while(len<=0)
	{
		MessageBox(wnd,"书籍名称不能为空!\n请重新输入","书籍名称错误",MB_OK | MB_ICONWARNING);
		InputBox(booknameInput,10,"请输入完整的书籍名称，如：\n《老人与海》");
		len=strlen(booknameInput);
	}




	InputBox(bookauthorInput,10,"请输入作者名称，如：\n金庸");
	len=strlen(bookauthorInput);
	while(len<=0)
	{
		MessageBox(wnd,"作者名称不能为空!\n请重新输入","作者名称错误",MB_OK | MB_ICONWARNING);
		InputBox(bookauthorInput,10,"请输入作者名称，如：\n金庸");
		len=strlen(bookauthorInput);
	}



	InputBox(bookpressInput,20,"请输入出版社，如：\n人民出版社");
	len=strlen(bookpressInput);
	while(len<=0)
	{
		MessageBox(wnd,"出版社不能为空!\n请重新输入","出版社错误",MB_OK | MB_ICONWARNING);
		InputBox(bookpressInput,20,"请输入出版社，如：\n人民出版社");
		len=strlen(bookpressInput);
	}


	InputBox(bookpriceInput,5,"请输入价格，如：\n20");
	len=strlen(bookpriceInput);
	while(len<=0)
	{
		MessageBox(wnd,"价格不能为空!\n请重新输入","价格错误",MB_OK | MB_ICONWARNING);
		InputBox(bookpriceInput,10,"请输入价格，如：\n20");
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
	MessageBox(wnd,"增加书籍成功","书籍添加成功",MB_OK);
	return 1;
}







/*函数：int Deletebook()*/
/*功能：删除书籍*/
				 		                   											         
int Deletebook()
{
	HWND wnd = GetHWnd();
	bookInfo onebook;
	char bookidInput[11];		//输入书籍代码
	char booknameInput[10];		//输入书名
	int		len;
	int		isExist;
	FILE	*fpss,*fptemp;		//学生成绩文件、临时成绩文件指针
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
		MessageBox(wnd,"书籍代码只能为10位!\n请重新输入","书籍代码",MB_OK | MB_ICONERROR);
		InputBox(bookidInput,11,"请输入10位书籍代码");
		len=strlen(bookidInput);
	}



	InputBox(booknameInput,10,"请输入书名");
	len=strlen(booknameInput);
	fpss=fopen("bookInfo.dat","rb");
	isExist=false;
	while(!feof(fpss))
	{
		int length=fread(&onebook,sizeof(onebook),1,fpss);
		if(length==0)	break;
		if(strcmp(onebook.bookid,bookidInput)==0 &&	                	//如果该图书已存在
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
		sprintf(strMsg,"书籍%s%s不存在。无法删除\n删除书籍失败!",
			onebook.bookid,onebook.bookname);
		MessageBox(wnd,strMsg,"书籍不存在，删除失败",MB_OK);
		return 0;
	}




	char stronebookInfor[200]="";
	sprintf(stronebookInfor,"你要删除的书籍如下：\n\r书名：%s\n\r书籍代码：%s确认删除吗？",
		onebook.bookInfo,onebook.bookInfo);
	if(MessageBox(wnd,stronebookInfor,"请确认删除",MB_YESNO)==IDYES)	//确认删除
	{
		if(MessageBox(wnd,"真的删除吗？\n删除后无法恢复","确认删除",
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
			remove("bookInfo.dat");							//删除老文件
			rename("tempbookInfo.dat","bookInfo.dat");		//将临时文件改名书籍信息文件
			MessageBox(wnd,"删除成功！\n已删除图书","删除成功",MB_OK | MB_ICONWARNING);
			return 1;
		}
	}
	return 0;
}












/************************************************************/
/*函数：int Modifybook()			                    */
/*功能：修改书籍价格						             	    */
/*参数：无													*/
/*输入：用户输入书籍代码、新价格					         */
/*输出：无													*/
/*备注：无													*/
/************************************************************/
int Modifybook()
{
	HWND wnd = GetHWnd();
	bookInfo onebook;          //书籍信息结构体变量
	char	bookidInput[11];		//用户输入的10位数字字符的书籍代码
    char  bookpriceInput;		//用户输入的价格
	char  booknameInput;
	int		len;
	int		isExist;
	FILE	*fpss;				//学生成绩文件指针
	InputBox(bookidInput,11,"请输入10位书籍代码");
	len=strlen(bookidInput);
	while(len!=10)
	{
		MessageBox(wnd,"书籍代码只能为10位!\n请重新输入","书籍代码错误",MB_OK | MB_ICONERROR);
		InputBox(bookidInput,11,"请输入10位书籍代码");
		len=strlen(bookidInput);
	}



	InputBox(booknameInput,10,"请输入书名");
	len=strlen(booknameInput);
	while(len<=0)                       
	{
		MessageBox(wnd,"书名不能为空!\n请重新输入","书名错误",MB_OK | MB_ICONWARNING);
		InputBox(booknameInput,10,"请输入书名");
		len=strlen(booknameInput);
	}


	
	if((fpss=fopen("bookInfo.dat","rb"))==NULL)	      //如果图书文件不存在，则新建之
	{
		fpss=fopen("bookInfo.dat","wb+");
		fclose(fpss);
	}else
		fclose(fpss);
	fpss=fopen("bookInfo.dat","rb+");              //读写方式打开成绩文件
	isExist=false;
	while(!feof(fpss))
	{
		int length=fread(&onebook,sizeof(onebook),1,fpss);
		if(length==0)	break;
		if(strcmp(onebook.bookid,bookidInput)==0 &&	         //如果该图书存在，确认修改
			strcmp(onebook.bookname,booknameInput)==0)
		
		{
			isExist=true;
			InputBox(bookpriceInput,10,"请输入新价格，如：20");
			len=strlen(bookpriceInput);
			while(len<=0)
			{
				MessageBox(wnd,"新价格不能为空!\n请重新输入","价格错误",MB_OK | MB_ICONWARNING);
				InputBox(bookprice,10,"请输入新价格，如：20");
				len=strlen(bookpriceInput);
			}
			char stronebookInfor[200]="";
			sprintf(stronebookInfor,"书名：%s\n\r书籍代码：%s\n\r原价格：%.1f\n\r修改后价格：%s\n\r确认修改吗？",
				onebook.bookname,onebook.bookid,onebook.bookprice,bookpriceInput);
			if(MessageBox(wnd,stronebookInfor,"确认修改",MB_YESNO)==IDYES)	//确认保存
			{
				bookprice; tempbookprice;
				tempprice.isValid=1;
				strcpy(tempbookInfo.bookid,bookidInput);
				strcpy(tempbookInfo.bookname,booknameInput);
				strcpy(tembookInfo,bookprice,bookpriceInput);
				fseek(fpss,-sizeof(bookprice),SEEK_CUR);		//后退一个书籍价格
				fwrite(&tempbookprice,sizeof(bookprice),1,fpss);	//将原书籍价格覆盖，从而完成修改
				MessageBox(wnd,"修改成功！\n已修改一本图书价格","修改成功",
					MB_OK | MB_ICONWARNING);
			}else
				MessageBox(wnd,"修改未完成","修改失败",MB_OK | MB_ICONWARNING);
			break;
		}
	}
	fclose(fpss);
	if(!isExist)
	{
		char strMsg[200];
		sprintf(strMsg,"书名：%s\n书籍代码：%s\n书籍不存在。无法修改\n修改失败!",
			booknameInput,bookidInput);
		MessageBox(wnd,strMsg,"书籍不存在，无法修改",MB_OK);
		return 0;
	}
	return 1;
}



















































/*函数：void bookmanage()*/
/*功能：图书基本信息管理主界面，根据用户的选择进行不同操作	*/

{
	int key;							//用户输入的功能号
	while(TRUE)
	{
		cleardevice();
		setcolor(RED);	
		setfont(48, 0, "黑体");
		outtextxy(150, 10, "书籍基本信息管理");
		setfont(32, 0, "宋体");
		setcolor(GREEN);
		outtextxy(180, 110, "请选择功能：");
		setcolor(BLACK);
		outtextxy(200, 160, "1.书籍录入");
		outtextxy(200, 210, "2.书籍删除");
		outtextxy(200, 260, "3.书籍查询");
		outtextxy(200, 310, "4.书籍价格修改");
		outtextxy(200, 360, "0.返回上一层");
		key=getch();				//读取该键
		if(key=='1')				//录入书籍基本信息
		{
			 InputbookInfo();
		}
		else if(key=='2')			//删除书籍基本信息
		{
			  Deletebook();
		}else if(key=='3')			//查询书籍基本信息
		{
			 searchbook();
		}else if(key=='4')			//修改书籍基本信息
		{
			Modifybook();
		}else if(key=='0')			//如果是'0'，表示退出书基本信息管理功能
		{
			return;

		}
	}
}



