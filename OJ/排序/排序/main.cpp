#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <csmath>
#include <cstdio>

using namespace std;

/**
���ӣ�https://www.nowcoder.com/questionTerminal/508f66c6c93d4191ab25151066cb50ef
��Դ��ţ����

 �������n�����������������

��������:
    ����ĵ�һ�а���һ������n(1<=n<=100)��
    ��������һ�а���n��������


�������:
    �����ж���������ݣ�����ÿ�����ݣ���������n�����������ÿ�������涼��һ���ո�
    ÿ��������ݵĽ��ռһ�С�
ʾ��1
����
4
1 4 3 2
���
1 2 3 4
*/

//���������������
int arr[100];

int main() {

    int n;

    //�����յ����ݱ��浽������
    while(scanf("%d", &n) != EOF) {
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        sort(arr, arr + n);

        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
