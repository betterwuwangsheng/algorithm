#include <bits/stdc++.h>

using namespace std;
const int M = 2e5 + 1;
int a[M];
int N, C;

//���ҵ�һ�� >= val �������±�
int lowerBound(int val) {
    int ans = -1;
    int l = 0, r = N - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        // >= B ����
        if(a[mid] >= val) {
            ans = mid;

            //����߼�������
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

//���ҵ�һ�� > val ����
int upperBound(int val) {
    int ans = -1;
    int l = 0, r = N - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        // >= B ����
        if(a[mid] > val) {
            ans = mid;

            //����߼�������
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}
int main() {
    //A- B = C
    // A : 1 1 2 3
    // C = 1
    // A= 1 => B = A - C = 0
    // A= 1 => B = A - C = 0
    // A= 2 => B = A - C = 1
    // A= 3 => B = A - C = 2

    //ö�� A��ͳ���������ж��ٸ� B ���� B = A - C
    //���ַ�ͳ��
    //B �ĸ��� = ���� >B ���±� - >= B ���±�
    scanf("%d%d", &N, &C);

    //��������
    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    //���򣨶��֣�
    sort(a, a + N);

    long long cnt = 0;

    //��������
    for(int i = 0; i < N; i++) {
        int A = a[i];
        int B = A - C;

        //���ֲ��������� B �ĸ���

        //���ҵ�һ�� >= B �������±�
        //lowerBound(B);
        //���ҵ�һ�� > B �������±�
        //upperBound(B);
        cnt += upperBound(B) - lowerBound(B);
    }

    cout << cnt << endl;
    return 0;
}
