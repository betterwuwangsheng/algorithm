#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

/**
Problem Description
����n���������밴�Ӵ�С��˳���������ǰm�������


Input
ÿ��������������У���һ����������n,m(0<n,m<1000000)���ڶ��а���n��������ͬ���Ҷ���������[-500000,500000]��������


Output
��ÿ��������ݰ��Ӵ�С��˳�����ǰm�������


Sample Input
5 3
3 -35 92 213 -644


Sample Output
213 92 3
*/
/**
����������������ݽ�������
ͨ�������������ʱ��(��Ҫ���츨���ļ�������)
*/
//�������� => ��һ����Χ�ڹ��츨�������ÿһ��Ԫ�ؽ��м���

const int MAXN = 1e6 + 10; //(0<n,m<1000000)
const int RANGE = 5e5; //���������±�[-500000,500000]�������� ͨ��ƽ�Ʊ�Ϊ [0,1000000]

//��ȡ����
int num[MAXN];

//�������� -> �����������Ҫ > ����������Ĵ�С
int cnt[MAXN]; //-500000 ~ 500000

int main() {
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF) {

        memset(cnt,0,sizeof(cnt)); //��������������

        for(int i = 0; i < n; i++) {
            //��ȡ����
            scanf("%d", &num[i]);

            //��������ƽ�Ʋ����м���
            cnt[num[i] + RANGE]++;
        }

        int index = 0;

        //��������鱣�浽����δ�����������
        for(int i = 0; i < MAXN; i++) {

                //ԭ�������±��������Ӳ����������ֱ�� cnt[i] ��ֵΪ 0
            while(cnt[i]--) {
                num[index++] = i - RANGE;  //������ -> ���ڽ��й�ƽ�ƣ�����Ҫ��ȥ RANGE
            }
        }

        //���ǰ m ������
        for(int i = n - 1; i >= n - m; --i) {
            if(i == n - m) {
                printf("%d\n", num[i]);
            } else {
                printf("%d ",num[i]);
            }
        }
    }
    return 0;
}
