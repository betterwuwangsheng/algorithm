#include <bits/stdc++.h>

using namespace std;

void ShellSOrt(int a[], int len){

    //����Ϊ len / 2�� ��������С����
    for(int group = len / 2; group > 0; group /= 2){

        //�ӵ� group ��Ԫ�أ�����������ڷ��龡��ֱ�Ӳ�������
        for(int i = group; i < len; i++){
            int index = i;
            int current = a[i];

            //ע���ʱ�Ĳ���������, group Ϊ����
            while(index - group >= 0 && a[index - group] > current){
                a[index] = a[index - group];
                index = index - group;
            }
            a[index] = current;
        }
    }
}
int main()
{
     int a[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    ShellSOrt(a, 10);

    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
