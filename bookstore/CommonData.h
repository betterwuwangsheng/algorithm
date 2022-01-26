/*头文件：CommonData.h，用来定义本系统中所用到的各种重要的数据结构*/
#ifndef	__COMMONDATA__
#define __COMMONDATA__


 typedef  struct       //系统使用用户基本信息，所有用户信息均存储在UserInfo.dat文件中        
	{
	 char UName[20];        //用户名
     char UPassword[20];    //密码
 }UserInfo ;
 typedef   struct          //会员信息结构体，所有的顾客信息均存储在guestInfo.dat文件中
  {   
	  char guestno[10];       //会员编号
	  char guestname[10];     //会员姓名     
	  char  guestage[5];         //会员年龄
	  char gusetgender[5];       //会员性别
	 	  
  }guestInfo;
  
 typedef   struct   
	 
	                                    //书籍信息结构体，所有书籍信息均存储在bookInfo.dat文件中
 {
	  
      char bookid[11];          //书籍代码
	  char bookname[10];          //书名
	  char bookauthor[10];     //作者
	  char bookpress[20];    //出版社
	  char bookprice[5];         //价格
 }bookInfo;


#endif
