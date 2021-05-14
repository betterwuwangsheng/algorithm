#include <bits/stdc++.h>

using namespace std;

// //���� [l, r] ������Ϊ [l, mid] ��[mid + 1, r] ʱʹ��
// int binary_1(int l, int r) {
//     while (l < r) {
//         int mid = l + r >> 1;

//         // check() �ж� mid �Ƿ���������
//         if (check(mid))
//             r = mid;
//         else
//             l = mid + 1;
//     }
// }

// //���� [l, r] ������Ϊ [l, mid - 1] ��[mid, r] ʱʹ��
// int binary_2(int l, int r) {
//     while (l < r) {
//         int mid = l + r + 1 >> 1;

//         // check() �ж� mid �Ƿ���������,������Ӧ����
//         if (check(mid))
//             l = mid;
//         else
//             r = mid - 1;
//     }
// }

//����������
// int binary_3(int l, int r) {
//     while ((r - l > 1e-6)) {
//         double mid = (l + 2) / 2;

//         if (mid * mid >= num)
//             r = mid;
//         else
//             l = mid;
//     }
// }
const int MAXN = 1e5;

int a[MAXN];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    //����
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //ѯ��
    while (k--) {
        int num;
        scanf("%d", &num);

        //�������ұ߽�
        int l = 0, r = n - 1;

        //����
        while (l < r) {
            //�м�λ����ֵ
            int mid = l + r >> 1;

            //�ж�����
            //�м�λ��ֵ >= num -> �������
            if (a[mid] >= num)
                r = mid;
            else  //�������ұ�
                l = mid + 1;
        }

        //�޽�ʱ ����������ֵ != num
        if (a[l] != num)
            printf("-1 -1\n");
        else {                 //���ֵ = num
            printf("%d ", l);  //������λ��

            //�����Ҳ�����
            int l = 0, r = n - 1;
            while (l < r) {
                //�м�λ�� l + r + 1 >> 1
                int mid = l + r + 1 >> 1;
                if (a[mid] <= num)
                    l = mid;
                else
                    r = mid - 1;
            }
            printf("%d\n", l);
        }
    }
    return 0;
}