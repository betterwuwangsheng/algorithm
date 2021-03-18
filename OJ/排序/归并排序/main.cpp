#include <bits/stdc++.h>
using namespace std;

int a[100];

///ͨ���ȽϺϲ��鲢��
void Merge(int a[], int left, int mid, int right) {

    int i = left;
    int j = mid + 1;

    ///��ʱ�����±�
    int  index = 0;

    ///��ʱ���飬�ݴ���
    int *help = (int*) malloc(sizeof(int) * (right - left + 1));

    ///�������ҽ���һ��Խ��
    while(i <= mid && j <= right) {
        if(a[i] <= a[j]) {
            help[index++] = a[i++];
        } else {
            help[index++] = a[j++];
        }
    }

    while(i <= mid) { /// j ��ͷ
        help[index++] = a[i++];
    }

    while(j <= right) {/// i ��ͷ
        help[index++] = a[j++];
    }

    index = 0;

    for(int k = left; k <= right; k++){
        a[k] = help[index++];
    }
}

///�鲢����
void MergeSort(int a[], int left, int right) {
    if(left >= right)
        return;

    ///�м�λ��
    int mid = left + (right - left) / 2;

    ///�鲢�������
    MergeSort(a, left, mid);

    ///�鲢�����ұ�
    MergeSort(a, mid + 1, right);

    ///�ϲ�
    Merge(a, left, mid, right);
}
int main() {


    int a[10] = {1,2,3,4,5,6,7,8,9,0};

    ///������
    MergeSort(a, 0, 9);

    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
