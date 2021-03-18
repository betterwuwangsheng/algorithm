#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

/**
����������һ���ȶ��������㷨.
�������Ԫ����n��0��k֮�������ʱ,ʱ�临�Ӷ���O(n+k),�ռ临�Ӷ�Ҳ��O(n+k),�������ٶȿ����καȽ������㷨.
��k���Ǻܴ������бȽϼ���ʱ,����������һ������Ч�������㷨.
���������ȱ���ǵ����ֵ��Сֵ������ʱ,�����ü�������,��Ԫ�ز�������ֵ,�����ü�������.


1.�ҳ��������������������С��Ԫ�أ�
2.ͳ��������ÿ��ֵΪi��Ԫ�س��ֵĴ���,��������C�ĵ�i�
3.�����еļ����ۼ�(��C�еĵ�һ��Ԫ�ؿ�ʼ,ÿһ���ǰһ����ӣ���
4.�������Ŀ������:
    ��ÿ��Ԫ��i����������ĵ�C(i)��,ÿ��һ��Ԫ�ؾͽ�C(i)��ȥ1.

*/
void CountSort(int a[], int len) {

    //����Ϊ��
    if(a == NULL)
        return;

    //��ʼ����ֵ
    int mx = a[0];
    int mn = a[0];
    int i;

    //1.�ҳ��������������������С��Ԫ�أ�
    //Ѱ����ֵ
    for(i = 1; i < len; i++) {
        if(a[i] > mx)
            mx = a[i];
        if(a[i] < mn)
            mn = a[i];
    }

    //���������������������������� > ��ô��� mx - mn��
    int l = mx - mn + 1;

    //������������
    int * cnt = (int*)malloc(sizeof(int) * l);

    //��ʼ����������Ϊ 0
    memset(cnt, 0, sizeof(int) * l);


    //2.ͳ��������ÿ��ֵΪ i ��Ԫ�س��ֵĴ���,���븨���ĵ� i �
    //��������������
    //��Ӧλ�õļ�������ֵ����
    for(i = 0; i < len; i++)
        cnt[a[i] - mn]++;

    //3.�����еļ����ۼ�(�Ӹ��������еĵ�һ��Ԫ�ؿ�ʼ,ÿһ���ǰһ����ӣ���
    for(int i = 1; i < l; i++)
        cnt[i] += cnt[i - 1];

    int* psort =(int*) malloc(sizeof(int) * len);
    memset(psort, 0, sizeof(int)*len);

    //4.�������Ŀ������:��ÿ��Ԫ��i����������ĵ�C(i)��,ÿ��һ��Ԫ�ؾͽ�C(i)��ȥ1.
    for(int i = len - 1; i >= 0; i--) {

        // ���������Ӧλ��ֵ��С
        cnt[a[i] - mn]--;

        //������鸳ֵ
        psort[cnt[a[i] - mn]] = a[i];
    }

    //��������鸴�Ƶ�������Ԫ�������У��������
    for(int i = 0; i < len; i++) {
        a[i] = psort[i];
    }

    free(cnt);
    free(psort);
    cnt = NULL;
    psort = NULL;
}


void print_array(int *arr, int len) {
    for(int i=0; i<len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[8] = {5, 2, 7, 4, 8, 1, 6, 3};
    CountSort(arr, 8);
    print_array(arr, 8);

    return 0;
}
