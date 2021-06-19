#include <ctype.h>    //�ַ���������
#include <stdio.h>    //I/O����
#include <stdlib.h>   //��׼�⺯��
#include <string.h>   //�ַ�������
#define M 100         //���峣����ʾ��¼��
#include <windows.h>  //���ڽ���

typedef struct {
    char no[20];    //ѧ��
    char name[20];  //����
    char sex[5];    //�Ա�
    int age;        //����
    float score;    //����
} STUDENTS;         //ѧ���ṹ��

//����ԭ�ͣ�����������
void welcome();                               //��ӭ����
int menu_select();                            //���˵�����
int enter(STUDENTS t[], int n);               //�����¼
void list(STUDENTS t[], int n);               //��ʾ��¼
void search_name(STUDENTS t[], int n);        //������������ʾ��¼
void search_no(STUDENTS t[], int n);          //��ѧ�Ų�����ʾ��¼
int del_name(STUDENTS t[], int n);            //������ɾ����¼
int del_no(STUDENTS t[], int n);              //��ѧ��ɾ����¼
int add(STUDENTS t[], int n);                 //�����¼
void save(STUDENTS t[], int n);               //��¼����Ϊ�ļ�
int load(STUDENTS t[]);                       //���ļ��ж���¼
void display(STUDENTS t[], int n);            //����Ų�����ʾ��¼
void sort_name(STUDENTS t[], int n);          //����������
void sort_no(STUDENTS t[], int n);            //��ѧ������
void copy();                                  //�ļ�����
void print_one(STUDENTS temp);                //��ʾ������¼
int find_name(STUDENTS t[], int n, char* s);  //����������
int find_no(STUDENTS t[], int n, char* no);   //��ѧ�Ų���
void modify_name(STUDENTS t[], int n);        //ͨ�������޸ļ�¼
void modify_no(STUDENTS t[], int n);          //ͨ��ѧ���޸ļ�¼
void quit(STUDENTS t[], int n);               //�˳�ϵͳ,��������Ϣ
void aboutSystem();                           //����ϵͳ

//��ӭ����
void welcome() {
    printf(
        "******************************************************************\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                   ��ӭ����ѧ������ϵͳ                         |\n");
    printf(
        "|                                                                |\n");
    printf("|");
    int i;
    for (i = 0; i < 64; i++)  //�����ӭ����Ķ�Ч
    {
        printf("_");
        Sleep(20);
    }
    printf("|\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                      ______________                            |\n");
    printf(
        "|                      | __________ |                            |\n");
    printf(
        "|                      ||          ||                            |\n");
    printf(
        "|                      || Welcome! ||                            |\n");
    printf(
        "|                      ||__________||                            |\n");
    printf(
        "|                      |____________|                            |\n");
    printf(
        "|                          /____\\                                "
        "|\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                     ���ߣ�Soarkey                               "
        "|\n");
    printf(
        "|                     �༶��XXXXXXXXXXX                          |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                                                                |\n");
    printf(
        "******************************************************************\n");
}

//�˵���������������ֵΪ������������ѡ�Ĳ˵���
int menu_select() {
    char s[80];
    int c;
    printf(
        "****************************** ���˵� ****************************\n");
    printf(
        "|                                                                |\n");
    printf(
        "|		           0. ����ѧ����¼                       |\n");
    printf(
        "|		           1. ���ѧ����¼                       |\n");
    printf(
        "|		           2. ����������                         |\n");
    printf(
        "|		           3. ��ѧ�Ų���                         |\n");
    printf(
        "|		           4. ������ɾ��                         |\n");
    printf(
        "|		           5. ��ѧ��ɾ��                         |\n");
    printf(
        "|		           6. �������޸�                         |\n");
    printf(
        "|		           7. ��ѧ���޸�                         |\n");
    printf(
        "|		           8. ����ѧ����¼                       |\n");
    printf(
        "|	                   9. ��������                         |\n");
    printf(
        "|		           10.����������                         |\n");
    printf("|		           11.��ѧ������                         |\n");
    printf(
        "|		           12.���������ļ�                       |\n");
    printf(
        "|		           13.�����˳�(�Զ�����)                 |\n");
    printf(
        "|		           14.����ϵͳ                           |\n");
    printf(
        "|                                                                |\n");
    printf(
        "******************************************************************"
        "\n\n");
    do {
        printf("\n	�������Ĳ˵�ѡ���ţ�0-14����");  //��ʾ����ѡ��
        scanf("%s", s);                                    //����ѡ����
        c = atoi(s);  //��������ַ���ת��Ϊ������
        getchar();    //�����س���
        if (c < 0 || c > 14)
            printf("\t�����������������������룡����");
    } while (c < 0 || c > 14);  //ѡ���0~11֮������
    return c;  //����ѡ�����������ݸ���������Ӧ�ĺ���
}

//�����¼���β�Ϊ�ṹ�������ԭ��¼���ȣ�������������Ϊ���ͱ�ʾ��¼����
int enter(STUDENTS t[], int n) {
    int i, m;
    system("cls");
    printf("\n������ѧ����¼������\n");
    scanf("%d", &m);  //�����¼��
    printf("������ѧ����¼��\n");
    printf(
        "ѧ��                ����                �Ա�      ����      ����\n");
    printf(
        "------------------------------------------------------------------\n");
    for (i = 0; i < m; i++) {
        scanf("%s%s%s%d%f", &t[i + n].no, &t[i + n].name, &t[i + n].sex,
              &t[i + n].age, &t[i + n].score);  //����ѧ����Ϣ
        getchar();
    }
    printf("\n����ѧ����Ϣ�ɹ���\n");
    return n + m;  //�����µļ�¼����
}

//��ʾ��¼������Ϊ��¼����ͼ�¼����
void list(STUDENTS t[], int n) {
    int i;
    system("cls");
    printf(
        "**************************** ѧ���嵥 ****************************\n");
    printf(
        "                                                                  \n");
    printf(
        "ѧ��                ����                �Ա�      ����      ����\n");
    printf(
        "------------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-20s%-20s%-10s%-10d%-5.2f\n", t[i].no, t[i].name, t[i].sex,
               t[i].age, t[i].score);
        if ((i + 1) % 10 == 0 && n % 10 > 0)  //�ж�����Ƿ�ﵽ10����¼
        {
            printf(
                "--------------------------------------------------------------"
                "----\n");
            printf("ÿҳ��ʾ10��ѧ����¼�����س������ҳ......\n");
            getchar();
            system("cls");
            printf(
                "**************************** ѧ���嵥 "
                "****************************\n");
            printf(
                "                                                              "
                "    \n");
            printf(
                "ѧ��                ����                �Ա�      ����      "
                "����\n");
            printf(
                "--------------------------------------------------------------"
                "----\n");
        }
    }
    printf(
        "                                                                  \n");
    printf(
        "------------------------------------------------------------------\n");
}

//����������¼
void search_name(STUDENTS t[], int n) {
    char s[20];  //��������������ַ���
    int i;       //������ҵ��������
    system("cls");
    printf(
        "*************************** ���������� ***************************\n");
    printf(
        "                                                                  \n");
    printf("��������ҵ�������\n");
    scanf("%s", s);          //�������������
    getchar();               //�����س���Ӱ��
    i = find_name(t, n, s);  //����find_name�������õ�һ������
    if (i > n - 1)           //�������iֵ����n-1��˵��û�ҵ�
        printf("û������Ϊ%s��ѧ����\n", s);
    else
        print_one(t[i]);  //�ҵ���������ʾ������ʾ��¼
}

//����ѧ�ż�¼
void search_no(STUDENTS t[], int n) {
    char no[20];  //���������ѧ��
    int i;        //������ҵ��ý������
    system("cls");
    printf(
        "*************************** ��ѧ�Ų��� ***************************\n");
    printf(
        "                                                                  \n");
    printf("��������ҵ�ѧ�ţ�\n");
    scanf("%s", no);        //���������ѧ��
    getchar();              //�����س���Ӱ��
    i = find_no(t, n, no);  //����find_no�������õ�һ������
    if (i > n - 1)          //�������iֵ����n-1��˵��û�ҵ�
        printf("û��ѧ��Ϊ%s��ѧ����\n", no);
    else
        print_one(t[i]);  //�ҵ���������ʾ������ʾ��¼
}

//������ɾ������������Ϊ��¼����ͼ�¼����
int del_name(STUDENTS t[], int n) {
    char s[20];  //Ҫɾ����¼������
    int i;
    printf("������Ҫɾ����ѧ��������\n");
    scanf("%s", s);  //��������
    getchar();
    i = find_name(t, n, s);  //����find_name����
    if (i == n)
        printf("û���ҵ�����Ϊ%s��ѧ����\n", s);
    else {
        printf("����ɾ����...\n");
        for (; i < n; i++)  //��ɾ��λ�ÿ�ʼ����ǰ��ѧ����¼
        {
            strcpy(t[i].name, t[i + 1].name);
            strcpy(t[i].no, t[i + 1].no);
            strcpy(t[i].sex, t[i + 1].sex);
            t[i].age = t[i + 1].age;
            t[i].score = t[i + 1].score;
        }
        n--;  //ɾ�����¼��n��1
        printf("ɾ���ɹ���\n");
    }
    return n;  //���ؼ�¼��
}

//��ѧ��ɾ������������Ϊ��¼����ͼ�¼����
int del_no(STUDENTS t[], int n) {
    char no[20];  //Ҫɾ����¼��ѧ��
    int i;
    printf("������Ҫɾ����ѧ��ѧ�ţ�\n");
    scanf("%s", no);  //����ѧ��
    getchar();
    i = find_no(t, n, no);  //����find_no����
    if (i == n)
        printf("û���ҵ�ѧ��Ϊ%s��ѧ����\n", no);
    else {
        printf("����ɾ����...\n");
        for (; i < n; i++)  //��ɾ��λ�ÿ�ʼ����ǰ��ѧ����¼
        {
            strcpy(t[i].name, t[i + 1].name);
            strcpy(t[i].no, t[i + 1].no);
            strcpy(t[i].sex, t[i + 1].sex);
            t[i].age = t[i + 1].age;
            t[i].score = t[i + 1].score;
        }
        n--;  //ɾ�����¼��n��1
        printf("ɾ���ɹ���\n");
    }
    return n;  //���ؼ�¼��
}

//�����¼����������Ϊ�ṹ������ͼ�¼��
int add(STUDENTS t[], int n) {
    STUDENTS temp;  //�²����¼��Ϣ
    int i, j;
    char s[20];     //ȷ���������ĸ���¼֮ǰ
    system("cls");  //��������
    printf("������Ҫ�����ѧ����¼��\n");
    printf(
        "******************************************************************\n");
    printf(
        "ѧ��                ����                �Ա�      ����      ����\n");
    printf(
        "------------------------------------------------------------------\n");
    scanf("%s %s %s %d %f", &temp.no, &temp.name, &temp.sex, &temp.age,
          &temp.score);  //����������Ϣ
    getchar();
    printf(
        "------------------------------------------------------------------\n");
    if (n > 0) {
        printf("���������λ�õ����������¼�¼�����ڸ�����ǰ��\n");
        scanf("%s", &s);  //�������λ�õ�����
        getchar();
        i = find_name(t, n, s);  //����find_name,ȷ������λ��
    } else
        i = 0;
    for (j = n - 1; j >= i; j--)  //�����һ����㿪ʼ����ƶ�һ��
    {
        //��ǰ��¼��������һ��
        strcpy(t[j + 1].no, t[j].no);
        strcpy(t[j + 1].name, t[j].name);
        strcpy(t[j + 1].sex, t[j].sex);
        t[j + 1].age = t[j].age;
        t[j + 1].score = t[j].score;
    }
    //���²����¼��������i��λ��
    strcpy(t[i].no, temp.no);
    strcpy(t[i].name, temp.name);
    strcpy(t[i].sex, temp.sex);
    t[i].age = temp.age;
    t[i].score = temp.score;
    n++;  //��¼��n��1
    printf("\n\t����ɹ���\n");
    getchar();
    return n;  //���ؼ�¼��
}

//���溯��������Ϊ�ṹ������ͼ�¼��
void save(STUDENTS t[], int n) {
    int i;
    FILE* fp;  //ָ���ļ���ָ��
    if ((fp = fopen("record.txt", "wb")) ==
        NULL)  //���ļ������жϴ��Ƿ�����
    {
        printf("�޷���ѧ����¼�ļ���\n");  //��ʧ��
        return;                              //�˳�
    }
    printf("\nѧ����Ϣ���ڱ�����......\n");
    fprintf(fp, "%d", n);  //����¼��д���ļ�
    fprintf(fp, "\r\n");   //�����з���д���ļ�
    for (i = 0; i < n; i++) {
        fprintf(fp, "%-20s%-30s%-10s%-10d%-5.2f", t[i].no, t[i].name, t[i].sex,
                t[i].age, t[i].score);  //��ʽд���¼
        fprintf(fp, "\r\n");            //�����з���д���ļ�
    }
    fclose(fp);
    int j;                    //�ر��ļ�
    for (j = 0; j < 30; j++)  //������涯Ч
    {
        printf(">");
        Sleep(50);
    }
    printf("\nѧ����Ϣ����ɹ���\n");  //��ʾ����ɹ�
}

//���뺯��������Ϊ�ṹ������
int load(STUDENTS t[]) {
    int i, n;
    FILE* fp;                                      //ָ���ļ���ָ��
    if ((fp = fopen("record.txt", "rb")) == NULL)  //���ļ�
    {
        printf("�޷���ѧ����¼�ļ���\n");  //��ʧ��
        return -1;                           //�˳�
    }
    fscanf(fp, "%d", &n);  //�����¼��
    for (i = 0; i < n; i++)
        fscanf(fp, "%20s%30s%10s%10d%5f", t[i].no, t[i].name, t[i].sex,
               &t[i].age, &t[i].score);      //����ʽ�����¼
    fclose(fp);                              //�ر��ļ�
    printf("\nѧ����Ϣ���ڼ�����......\n");  //�����ʾ
    int j;
    for (j = 0; j < 30; j++)  //������涯Ч
    {
        printf(">");
        Sleep(50);
    }
    printf("\n�Ѿ��ɹ�����ѧ����¼�ļ����ڴ棡\n");  //��ʾ����ɹ�
    system("pause");
    return n;  //���ؼ�¼��
}

//�������ʾ��¼����
void display(STUDENTS t[], int n) {
    int id;
    printf("��������ţ�\n");
    scanf("%d", &id);  //�������
    getchar();
    if (id >= 1 && id < n + 1)  //�ж�����Ƿ��ڼ�¼��Χ��
    {
        print_one(t[id - 1]);  //�������������ʾ�ü�¼
        printf("\r\n");
    } else
        printf("���Ϊ%d��ѧ�������ڣ�\n", id);  //�����ų�����Χʱ��ʾ��Ϣ
}

//������������������Ϊ�ṹ������ͼ�¼��
void sort_name(STUDENTS t[], int n) {
    //ð������
    int i, j;
    STUDENTS temp;  //��ʱ�������ڽ�������
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - j; j++)
            if ((strcmp(t[j].name, t[j + 1].name)) > 0)  //�Ƚϴ�С
            {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
    }
    printf("******** ����ɹ���********\n");  //��ʾ����ɹ�
}

//��ѧ��������������Ϊ�ṹ������ͼ�¼��
void sort_no(STUDENTS t[], int n) {
    //ð������
    int i, j, flag;
    STUDENTS temp;  //��ʱ�������ڽ�������
    for (i = 0; i < n - 1; i++) {
        flag = 0;  //���ñ�־�ж��Ƿ�������
        for (j = 0; j < n - 1 - j; j++)
            if ((strcmp(t[j].no, t[j + 1].no)) > 0)  //�Ƚϴ�С
            {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
                flag++;
            }
        if (flag == 0)
            break;  //�����־Ϊ0��˵��û�з�����������ѭ������
    }
    printf("******** ����ɹ���********\n");  //��ʾ����ɹ�
}

//�����ļ�
void copy() {
    char outfile[20];  //Ŀ���ļ���
    int i, n;
    STUDENTS temp[M];  //������ʱ����
    FILE *sfp, *tfp;   //����ָ���ļ���ָ��
    system("cls");     //����
    if ((sfp = fopen("record.txt", "rb")) == NULL)  //��ѧ����¼�ļ�
    {
        printf("�޷���ѧ����¼�ļ���\n");  //��ʧ��
        return;                              //�˳�
    }
    printf("������Ŀ���ļ���������c:\\f1\\te.txt:\n");
    scanf("%s", outfile);  //����Ŀ���ļ���
    getchar();
    if ((tfp = fopen(outfile, "wb")) == NULL)  //��Ŀ���ļ�
    {
        printf("�޷���Ŀ���ļ���\n");  //��ʧ��
        return;                          //�˳�
    }
    fscanf(sfp, "%d", &n);  //�����ļ���¼��
    fprintf(tfp, "%d", n);  //д���ļ���¼��
    fprintf(tfp, "\r\n");   //д�뻻�з�
    for (i = 0; i < n; i++) {
        fscanf(sfp, "%20s%30s%10s%10d%5f\n", temp[i].no, temp[i].name,
               temp[i].sex, &temp[i].age, &temp[i].score);  //�����¼
        fprintf(tfp, "%-20s%-30s%-10s%-10d%5f", temp[i].no, temp[i].name,
                temp[i].sex, temp[i].age, temp[i].score);  //д���¼
        fprintf(tfp, "\r\n");                              //д�뻻�з�
    }
    fclose(sfp);                       //�ر�Դ�ļ�
    fclose(tfp);                       //�ر�Ŀ���ļ�
    printf("���ڸ����ļ���......\n");  //�����ʾ
    int j;
    for (j = 0; j < 30; j++)  //������ƶ�Ч
    {
        printf(">");
        Sleep(50);
    }
    printf("\n�Ѿ��ɹ�����ѧ����¼��Ŀ���ļ���\n");  //��ʾ���Ƴɹ�
}

//��ʾָ����һ����¼
void print_one(STUDENTS temp) {
    printf(
        "------------------------------------------------------------------\n");
    printf(
        "ѧ��                ����                �Ա�      ����      ����\n");
    printf(
        "------------------------------------------------------------------\n");
    printf("%-20s%-20s%-10s%-10d%-5.2f\n", temp.no, temp.name, temp.sex,
           temp.age, temp.score);
    printf(
        "------------------------------------------------------------------\n");
}

//���������Һ���������Ϊ��¼����ͼ�¼�����Լ�����
int find_name(STUDENTS t[], int n, char* s) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(s, t[i].name) == 0)  //��¼�е������ʹ��Ƚϵ������Ƿ���ͬ
            return i;  //��ȣ��򷵻ظü�¼���±�ţ�������ǰ����
    }
    return i;  //����iֵ
}

//��ѧ�Ų��Һ���������Ϊ��¼����ͼ�¼�����Լ���¼ѧ��no
int find_no(STUDENTS t[], int n, char* no) {
    int i;
    for (i = 0; i < n; i++)  //�ӵ�һ����¼��ʼ��ֱ�����һ��
    {
        if (strcmp(no, t[i].no) == 0)  //��¼�е�ѧ�źʹ��Ƚϵ�ѧ���Ƿ���ͬ
            return i;  //��ȣ��򷵻ظü�¼���±�ţ�������ǰ����
    }
    return i;  //����iֵ
}

//�޸ĺ������������������޸�
void modify_name(STUDENTS t[], int n) {
    char s[20];  //Ҫ�޸ļ�¼��ѧ��
    int i;       //�����ҵ����±�
    system("cls");
    printf(
        "*************************** �������޸� ***************************\n");
    printf(
        "                                                                  \n");
    printf("������Ҫ�޸ĵ�ѧ��������\n");
    scanf("%s", &s);  //��������
    getchar();
    i = find_name(t, n, s);  //����find_no����
    if (i == n)
        printf("û���ҵ�����Ϊ%s��ѧ����\n", s);
    else {
        printf("ѧ��Ϊ%s��ѧ���޸�ǰ��\n", s);
        print_one(t[i]);
        printf("�������޸ĺ�ѧ����¼:\n");
        printf(
            "ѧ��                ����                �Ա�      ����      "
            "����\n");
        printf(
            "------------------------------------------------------------------"
            "\n");
        scanf("%s", t[i].no);
        getchar();
        scanf("%s", t[i].name);
        getchar();
        scanf("%s", t[i].sex);
        getchar();
        scanf("%d", &t[i].age);
        getchar();
        scanf("%f", &t[i].score);
        getchar();
        printf("\n\n************* �޸ĳɹ���*************\n\n");
        printf("ѧ��Ϊ%s��ѧ���޸ĺ����ϢΪ��\n", s);
        print_one(t[i]);
    }
}

//�޸ĺ�������������ѧ���޸�
void modify_no(STUDENTS t[], int n) {
    char no[20];  //Ҫ�޸ļ�¼��ѧ��
    int i;        //�����ҵ����±�
    system("cls");
    printf(
        "*************************** ��ѧ���޸� ***************************\n");
    printf(
        "                                                                  \n");
    printf("������Ҫ�޸ĵ�ѧ��ѧ�ţ�\n");
    scanf("%s", no);  //����ѧ��
    getchar();
    i = find_no(t, n, no);  //����find_no����
    if (i == n)
        printf("û���ҵ�ѧ��Ϊ%s��ѧ����\n", no);
    else {
        printf("ѧ��Ϊ%s��ѧ���޸�ǰ��\n", no);
        print_one(t[i]);
        printf("�������޸ĺ�ѧ����¼:\n");
        printf(
            "ѧ��                ����                �Ա�      ����      "
            "����\n");
        printf(
            "------------------------------------------------------------------"
            "\n");
        scanf("%s", t[i].no);
        getchar();
        scanf("%s", t[i].name);
        getchar();
        scanf("%s", t[i].sex);
        getchar();
        scanf("%d", &t[i].age);
        getchar();
        scanf("%f", &t[i].score);
        getchar();
        printf("\n\n************* �޸ĳɹ���*************\n\n");
        printf("ѧ��Ϊ%s��ѧ���޸ĺ����ϢΪ��\n", no);
        print_one(t[i]);
    }
}

//�˳�����,ʹ�����˳���������Ϣ
void quit(STUDENTS t[], int n) {
    save(t, n);
    Sleep(50);
    puts("\n���Ѿ��ɹ��˳���ϵͳ����ӭ�ٴ�ʹ�ã�����");
    system("pause");
    exit(0);
}

//����ϵͳ����
void aboutSystem() {
    system("cls");
    SYSTEMTIME sys;      //����ʱ�����
    GetLocalTime(&sys);  //��ȡϵͳ��ǰʱ��
    printf(
        "**************************** ����ϵͳ ****************************\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                         ѧ����Ϣ����ϵͳ                       |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                           ���ߣ�Soarkey                         "
        "|\n");
    printf(
        "|                         �༶��XXXXXXXXXX                      |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|              Copyright �� 2016 StudentManagerSystem            |\n");
    printf(
        "|                        All Rights Reserved                     |\n");
    printf(
        "|                                                                |\n");
    printf(
        "|                                                                |\n");
    printf("|          ");
    printf("������   %4d��%2d��%2d��  ����%d  %2dʱ%2d��%2d��", sys.wYear,
           sys.wMonth, sys.wDay, sys.wDayOfWeek, sys.wHour, sys.wMinute,
           sys.wSecond);
    printf("            |\n");
    printf(
        "|                                                                |\n");
    printf(
        "******************************************************************\n");
}

//������
int main() {
    system("title ѧ����Ϣ����ϵͳ");     //���ô��ڱ���
    system("mode con cols=67 lines=32");  //���ô��ڴ�С
    system("color F9");  //���ô�����ɫ(ǰ��ɫΪ����ɫ������ɫΪ��ɫ)
    STUDENTS stu[M];     //����ṹ������
    int length;          //�����¼����
    welcome();           //��ӭ����
    length = load(stu);  //�����ļ����ڴ�
    for (;;)             //����ѭ��
    {
        system("cls");  //����
        switch (menu_select())  //�������˵�����������ֵ��Ϊ������������
        {
            case 0:
                length = enter(stu, length);
                break;  //�����¼
            case 1:
                list(stu, length);
                break;  //��ʾȫ����¼
            case 2:
                search_name(stu, length);
                break;  //���������Ҽ�¼
            case 3:
                search_no(stu, length);
                break;  //��ѧ�Ų��Ҽ�¼
            case 4:
                length = del_name(stu, length);
                break;  //������ɾ����¼
            case 5:
                length = del_no(stu, length);
                break;  //��ѧ��ɾ����¼
            case 6:
                modify_name(stu, length);
                break;  //�������޸ļ�¼
            case 7:
                modify_no(stu, length);
                break;  //��ѧ���޸ļ�¼
            case 8:
                length = add(stu, length);
                break;  //�����¼
            case 9:
                display(stu, length);
                break;  //�������ʾ��¼
            case 10:
                sort_name(stu, length);
                break;  //����������
            case 11:
                sort_no(stu, length);
                break;  //��ѧ������
            case 12:
                copy();
                break;  //�����ļ���Ŀ���ļ�
            case 13:
                quit(stu, length);
                break;  //�������,��������Ϣ
            case 14:
                aboutSystem();
                break;  //����ϵͳ
        }
        printf("���س������ز˵�...\n");  //��ʾ��Ϣ
        getchar();                        //�����س���
    }
    return 0;
}