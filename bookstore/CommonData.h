/*ͷ�ļ���CommonData.h���������屾ϵͳ�����õ��ĸ�����Ҫ�����ݽṹ*/
#ifndef	__COMMONDATA__
#define __COMMONDATA__


 typedef  struct       //ϵͳʹ���û�������Ϣ�������û���Ϣ���洢��UserInfo.dat�ļ���        
	{
	 char UName[20];        //�û���
     char UPassword[20];    //����
 }UserInfo ;
 typedef   struct          //��Ա��Ϣ�ṹ�壬���еĹ˿���Ϣ���洢��guestInfo.dat�ļ���
  {   
	  char guestno[10];       //��Ա���
	  char guestname[10];     //��Ա����     
	  char  guestage[5];         //��Ա����
	  char gusetgender[5];       //��Ա�Ա�
	 	  
  }guestInfo;
  
 typedef   struct   
	 
	                                    //�鼮��Ϣ�ṹ�壬�����鼮��Ϣ���洢��bookInfo.dat�ļ���
 {
	  
      char bookid[11];          //�鼮����
	  char bookname[10];          //����
	  char bookauthor[10];     //����
	  char bookpress[20];    //������
	  char bookprice[5];         //�۸�
 }bookInfo;


#endif
