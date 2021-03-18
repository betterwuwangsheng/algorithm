#include <iostream>
#include<cstdio>

using namespace std;
/**
Problem Description
ͳ�Ƹ�����n�����У���������������ĸ�����


Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ����������n��n<100������ʾ��Ҫͳ�Ƶ���ֵ�ĸ�����Ȼ����n��ʵ�������n=0�����ʾ������������в�������


Output
����ÿ���������ݣ����һ��a,b��c���ֱ��ʾ�����������и�������������ĸ�����


Sample Input
6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0


Sample Output
1 2 3
0 0 5
*/
int main() {


    int n,cnt1,cnt2,cnt3;
    double num;

    while(scanf("%d", &n) != EOF) {

        //�߽����� n == 0
        if(n == 0)
            break;

        //ÿһ�ζ�ȡ��һ������ݾͽ�����������
        cnt1 = 0;
        cnt2 = 0;
        cnt3 = 0;

        for(int i = 0; i < n; i++) {
            scanf("%lf",&num);

            if(num < 0)
                cnt1++;
            else if(num == 0)
                cnt2++;
            else
                cnt3++;
        }
        printf("%d %d %d\n",cnt1,cnt2,cnt3);
    }
    return 0;
}
