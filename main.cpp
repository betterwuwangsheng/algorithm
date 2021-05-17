
//��������
void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

/**
 * ���������㷨
 * int a[]:����������
 * int l: ������߽�
 * int r: �����ұ߽�
 */
void quick_sort(int a[], int l, int r) {
    //������û��Ԫ�ػ���ֻ��һ��Ԫ��
    if (l >= r)
        return;  //�����в���

    //ѡȡ����Ԫ��
    int pivot = a[l + r >> 1];  //�˴�ѡȡ�м�λ��Ԫ��

    int i = l - 1, j = r + 1;  // i,j �ֱ�ָ��������߽�ǰһλ�ã��ұ߽��һλ��

    //�� i < j ʱ,����ѭ��
    while (i < j) {
        do {
            i++;
            // i �����ƶ�,ֱ����ָԪ�ش�������Ԫ��(ֻҪ
            // i ��ָλ��Ԫ��С������Ԫ��,��˵����Ԫ������������ȷ)
        } while (a[i] < pivot);

        do {
            j--;
            // j �����ƶ�,ֱ����ָԪ��С������Ԫ��
        } while (a[j] > pivot);

        //û������
        if (i < j)
            swap(a[i], a[j]);  //����i,j��ָԪ��
    }

    //�ݹ�
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}