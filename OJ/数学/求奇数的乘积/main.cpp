#include <iostream>
#include <cstdio>

using namespace std;

/**

Problem Description
����n�������������������������ĳ˻���


Input
�������ݰ����������ʵ����ÿ������ʵ��ռһ�У�ÿ�еĵ�һ����Ϊn����ʾ��������һ����n����������n������������Լ���ÿ�����ݱض����ٴ���һ��������


Output
���ÿ�����е����������ĳ˻������ڲ���ʵ�������һ�С�


Sample Input
3 1 2 3
4 2 3 4 5


Sample Output
3
15
*/
int main() {
    int n;
    long long int num,ans;

    while(scanf("%d", &n) != EOF) {
        ans = 1;
        for(int i = 0; i < n; i++) {
            scanf("%lld", &num);
            if(num % 2 == 1) {
                ans *= num;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
