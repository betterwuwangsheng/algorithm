#include <bits/stdc++.h>

using namespace std;

void InsertSort(int a[], int len) {

    //���Ѿ������Ԫ���дӺ���ǰ�Ƚ�
    //Ĭ��a[0] ����
    for(int i = 1; i < len; i++) {

        //�Ѿ�����Ԫ�ص����һ��Ԫ��
        //��Ϊǰ i-1 �������Ǵ�С������������У�����ֻҪ��ǰ�Ƚϵ��� (a[index]) �� current �󣬾Ͱ����������һλ
        int index = i - 1;

        // ���浱ǰ����Ԫ��
        // ȡ���� i ��������ǰ i-1 �����ȽϺ󣬲������λ��
        int current = a[i];

        for(index = i - 1; index >= 0 && a[index] > current; index--){
            a[index + 1] = a[index];
        }
        //        //��Ԫ�غ���
        //        while(index >= 0  && a[index] > current) {
        //
        //            // ������ current �����ݺ���
        //            a[index + 1] = a[index];
        //
        //            // ��ǰ�Ƚ�
        //            index--;
        //        }

        //���뵽��ȷλ��
        a[index + 1] = current;
    }
}
int main() {
    int a[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    InsertSort(a, 10);

    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
